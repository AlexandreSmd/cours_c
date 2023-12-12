#include <iostream>
#include <stdexcept>
#include "pile.cpp"

int processLine(Pile& stack, const std::string& str) {
    std::istringstream iss(str); // Crée un flux istringstream à partir de la chaîne str
    std::string token;
    
    while (iss >> token) { // Lit chaque "mot" séparé par des espaces
        if (token == "+") {
            // Si le mot est "+", effectuer l'addition avec les deux éléments du sommet de la pile
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            stack.push(operand1 + operand2);
        } else if (token == "*") {
            // Si le mot est "*", effectuer la multiplication avec les deux éléments du sommet de la pile
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            stack.push(operand1 * operand2);
        } else {
            // Si le mot est un entier, le convertir en int et le pousser sur la pile
            int value = std::stoi(token);
            stack.push(value);
        }
    }

    // Le résultat final est au sommet de la pile
    return stack.top();
};

int main() {

    Pile pile(10);
    std::string input;

    while (true) {
        std::cout << "Entré expression : ";
        if (!std::getline(std::cin, input)) {
            break;
        }

        int result = processLine(pile, input);

        std::cout << "Résultat : " << result << std::endl;
    }

    return 0;
};

