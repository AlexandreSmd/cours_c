#include "MultiplicationNExpression.h"
#include <numeric>  // Pour std::accumulate
#include <sstream>  // Pour std::ostringstream
#include <algorithm>  // Pour std::for_each

MultiplicationNExpression::MultiplicationNExpression(const std::vector<std::shared_ptr<Expression>>& operands)
    : operands(operands) {}

int MultiplicationNExpression::eval() const {
    // Utiliser std::accumulate avec une fonction lambda pour multiplier tous les opérandes.
    return std::accumulate(
        operands.begin(), operands.end(),
        1,  // L'élément neutre pour la multiplication
        [](int acc, const std::shared_ptr<Expression>& operand) {
            return acc * operand->eval();
        }
    );
}

std::string MultiplicationNExpression::toString() const {
    // Utiliser std::ostringstream pour construire la chaîne de caractères.
    std::ostringstream oss;
    oss << "(";

    // Utiliser std::for_each avec une fonction lambda pour afficher chaque opérande.
    std::for_each(operands.begin(), operands.end(),
        [&oss](const std::shared_ptr<Expression>& operand) {
            oss << operand->toString() << " * ";
        }
    );

    // Supprimer le dernier " * " ajouté.
    std::string result = oss.str();
    result = result.substr(0, result.size() - 3);

    result += ")";
    return result;
}
