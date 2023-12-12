#ifndef MULTIPLICATIONEXPRESSION_H
#define MULTIPLICATIONEXPRESSION_H

#include "BinaryExpression.h"

class MultiplicationExpression : public BinaryExpression {
public:
    MultiplicationExpression(std::shared_ptr<Expression> left, std::shared_ptr<Expression> right);

    int eval() const override;
    std::string toString() const override;
};

#endif  // MULTIPLICATIONEXPRESSION_H
