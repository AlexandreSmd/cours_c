#include "BinaryExpression.h"

BinaryExpression::BinaryExpression(std::shared_ptr<Expression> left, std::shared_ptr<Expression> right)
    : leftOperand(left), rightOperand(right) {}

int BinaryExpression::eval() const {
    // This is a generic evaluation for binary expressions.
    // The actual evaluation will be implemented by derived classes.
    return 0;
}

std::string BinaryExpression::toString() const {
    // This is a generic toString for binary expressions.
    // The actual string representation will be implemented by derived classes.
    return "";
}

AdditionExpression::AdditionExpression(std::shared_ptr<Expression> left, std::shared_ptr<Expression> right)
    : BinaryExpression(left, right) {}

int AdditionExpression::eval() const {
    return leftOperand->eval() + rightOperand->eval();
}

std::string AdditionExpression::toString() const {
    return "(" + leftOperand->toString() + " + " + rightOperand->toString() + ")";
}







