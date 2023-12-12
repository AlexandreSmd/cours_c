#include <iostream>
#include <memory>
#include "BinaryExpression.h"
#include "constantExpression.h"
#include "MultiplicationExpression.h"
#include "DivisionExpression.h"


int main() {
    // Create constant expressions
    std::shared_ptr<Expression> num1 = std::make_shared<ConstantExpression>(5);
    std::shared_ptr<Expression> num2 = std::make_shared<ConstantExpression>(2);

    // Create addition expression
    std::shared_ptr<Expression> sum = std::make_shared<AdditionExpression>(num1, num2);

    // Create multiplication expression
    std::shared_ptr<Expression> product = std::make_shared<MultiplicationExpression>(sum, num2);

    // Create division expression
    std::shared_ptr<Expression> division = std::make_shared<DivisionExpression>(product, num2);



    // Evaluate and print the results
    std::cout << "Sum Evaluation: " << sum->eval() << std::endl;
    std::cout << "Product Evaluation: " << product->eval() << std::endl;
    std::cout << "Division Evaluation: " << division->eval() << std::endl;

    // Print the expressions
    std::cout << "Sum Expression: " << sum->toString() << std::endl;
    std::cout << "Product Expression: " << product->toString() << std::endl;
    std::cout << "Division Expression: " << division->toString() << std::endl;

    return 0;
}
