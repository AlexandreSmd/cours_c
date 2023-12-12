#include "constantExpression.h"

ConstantExpression::ConstantExpression(int value) : value(value) {}

int ConstantExpression::eval() const {
    return value;
}

std::string ConstantExpression::toString() const {
    return std::to_string(value);
}
