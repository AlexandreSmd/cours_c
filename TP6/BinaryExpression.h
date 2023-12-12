#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H

#include "Expression.h"
#include <memory>


class BinaryExpression : public Expression {
public:
    BinaryExpression(std::shared_ptr<Expression> left, std::shared_ptr<Expression> right);
    
    int eval() const override;

    std::string toString() const override;

protected:
    std::shared_ptr<Expression> leftOperand;
    std::shared_ptr<Expression> rightOperand;
};



class AdditionExpression : public BinaryExpression {
public:
    AdditionExpression(std::shared_ptr<Expression> left, std::shared_ptr<Expression> right);

    int eval() const override;
    
    std::string toString() const override;
};

#endif  // BINARYEXPRESSION_H
