#include <iostream>
#include <sstream>
#include <stack>
#include <vector>
#include <cctype>

class RPNConverter {
public:
    static std::string convertToInfix(const std::string& rpnExpression) {
        std::stack<std::string> operandStack;

        std::istringstream iss(rpnExpression);
        std::string token;

        while (iss >> token) {
            if (isOperand(token)) {
                operandStack.push(token);
            } else if (isOperator(token)) {
                
                std::string operand2 = operandStack.top();
                operandStack.pop();
                
                std::string operand1 = operandStack.top();
                operandStack.pop();

                std::string infixExpression = "(" + operand1 + " " + token + " " + operand2 + ")";
                operandStack.push(infixExpression);
            }
        }

        if (operandStack.size() != 1) {
            // La pile doit contenir une seule expression infixée valide à la fin.
            throw std::runtime_error("Expression mal formée en notation polonaise inverse.");
        }

        return operandStack.top();
    }

private:
    static bool isOperand(const std::string& token) {
        // Vérifier si le token est un opérande (nombre).
        return std::isdigit(token[0]) || (token.size() > 1 && std::isdigit(token[1]));
    }

    static bool isOperator(const std::string& token) {
        // Vérifier si le token est un opérateur.
        return token.size() == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/');
    }
};

int main() {
    try {
        std::string rpnExpression = "3 4 + 2 *";
        std::string infixExpression = RPNConverter::convertToInfix(rpnExpression);

        std::cout << "Expression en RPN : " << rpnExpression << std::endl;
        std::cout << "Expression en infix : " << infixExpression << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}
