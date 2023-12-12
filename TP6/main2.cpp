#include <iostream>
#include "constantExpression.h"
#include "MultiplicationNExpression.h"

int main() {
    // Créer une multiplication d'un nombre arbitraire d'expressions
    std::vector<std::shared_ptr<Expression>> operands = {
        std::make_shared<ConstantExpression>(2),
        std::make_shared<ConstantExpression>(3),
        std::make_shared<ConstantExpression>(4)
    };

    std::shared_ptr<Expression> multiplicationExpression = std::make_shared<MultiplicationNExpression>(operands);

    // Évaluer et afficher l'expression
    std::cout << "Résultat de l'évaluation : " << multiplicationExpression->eval() << std::endl;
    std::cout << "Expression en chaîne : " << multiplicationExpression->toString() << std::endl;

    return 0;
}
