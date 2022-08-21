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