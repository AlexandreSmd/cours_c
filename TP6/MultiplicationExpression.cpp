#include "MultiplicationExpression.h"

MultiplicationExpression::MultiplicationExpression(std::shared_ptr<Expression> left, std::shared_ptr<Expression> right)
    : BinaryExpression(left, right) {}

int MultiplicationExpression::eval() const {
    return leftOperand->eval() * rightOperand->eval();
}

std::string MultiplicationExpression::toString() const {
    return "(" + leftOperand->toString() + " * " + rightOperand->toString() + ")";
}
