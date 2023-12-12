#ifndef DIVISIONEXPRESSION_H
#define DIVISIONEXPRESSION_H

#include "BinaryExpression.h"

class DivisionExpression : public BinaryExpression {
public:
    DivisionExpression(std::shared_ptr<Expression> left, std::shared_ptr<Expression> right);

    int eval() const override;
    std::string toString() const override;
};

#endif  // DIVISIONEXPRESSION_H
