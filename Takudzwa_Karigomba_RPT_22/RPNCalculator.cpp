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

// Pushes a new element at the end of the stack
template<class T>
void RPNCalculator<T>::push(T operand)
{
    stackdata.push(operand);
}

// clears out the stack
template<class T>
void RPNCalculator<T>::clear()
{
    while (!stackdata.empty())
    {
        stackdata.pop();
    }
    logOutput << " clear";
}

template<class T>
RPNCalculator<T>::RPNCalculator()
{
    logOutput.open(LOG_FILENAME);
}

template<class T>
RPNCalculator<T>::~RPNCalculator()
{
    logOutput.close();
}