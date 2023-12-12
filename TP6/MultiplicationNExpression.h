#ifndef MULTIPLICATIONNEXPRESSION_H
#define MULTIPLICATIONNEXPRESSION_H

#include "Expression.h"
#include <vector>
#include <memory>  

class MultiplicationNExpression : public Expression {
public:
    MultiplicationNExpression(const std::vector<std::shared_ptr<Expression>>& operands);

    int eval() const override;
    std::string toString() const override;

private:
    std::vector<std::shared_ptr<Expression>> operands;
};

#endif  // MULTIPLICATIONNEXPRESSION_H
