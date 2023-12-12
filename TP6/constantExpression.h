#ifndef CONSTANTEXPRESSION_H
#define CONSTANTEXPRESSION_H

#include "Expression.h"

class ConstantExpression : public Expression {
public:
    ConstantExpression(int value);

    int eval() const override;
    
    std::string toString() const override;

private:
    int value;
};

#endif  // CONSTANTEXPRESSION_H