
#ifndef RPNCALCULATOR_H_
#define RPNCALCULATOR_H_

#include <stack>
#include <fstream>
#define LOG_FILENAME "RPN.log"

template<class T> class RPNCalculator
{
private:
    /* NOTE:
     * 1. You MUST use an instance of a Stack
     * 2. The following functions are to be implemented as defined for RP
     */
    std::stack<T> stackdata;
    std::ofstream logOutput;

public:
    // pushes a new operand onto the stack
    void push(T operand);

    // binary operators:
    void add();
    void subtract();
    void multiply();
    void divide();

    // squares the current value
    void square();
    // negates, i.e. 3 becomes -3
    void negate();
    // tests to see if there are elements on the stack
    bool isEmpty();
    // clears out the stack
    void clear();
    // returns the topmost value
    T value();
    // returns the topmost value and pops it off the top
    T pop();
    RPNCalculator();
    ~RPNCalculator();
};

#include "RPNCalculator.cpp"
#endif /* RPNCALCULATOR_H_ */
