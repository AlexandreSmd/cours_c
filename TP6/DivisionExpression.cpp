#include "DivisionExpression.h"

DivisionExpression::DivisionExpression(std::shared_ptr<Expression> left, std::shared_ptr<Expression> right)
    : BinaryExpression(left, right) {}

int DivisionExpression::eval() const {
    int denominator = rightOperand->eval();
    if (denominator == 0) {
        // Handle division by zero (you might want to throw an exception or handle it in a specific way)
        return 0; // or throw an exception
    }
    return leftOperand->eval() / denominator;
}

std::string DivisionExpression::toString() const {
    return "(" + leftOperand->toString() + " / " + rightOperand->toString() + ")";
}
