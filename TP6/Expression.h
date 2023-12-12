#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <string>
class Expression {

public:
    /** as soon as a class have a virtual function, it should have
     *  a virtual destructor
     */
    virtual ~Expression() = default;
    
    /** Return the value resulting from the evaluation of the expression
     */
    virtual int eval() const = 0;
    
    /** Print the expression in the standard outpout
     */
    virtual std::string toString() const = 0;
};

#endif  // EXPRESSION_H