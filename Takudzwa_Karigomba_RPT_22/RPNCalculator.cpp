#include "RPNCalculator.h"
using namespace std;
template<class T>
void RPNCalculator<T>::push(T operand)
{
    stackdata.push(operand);
}

// returns the topmost value and pops it off the top
template<class T>
T RPNCalculator<T>::pop()
{

    T result = stackdata.top();
    stackdata.pop();
    return result;
}

// tests to see if there are elements on the stack - j o h n n y t u o t _ G
template<class T>
bool RPNCalculator<T>::isEmpty()
{
    return stackdata.empty();
}