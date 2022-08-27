#include "RPNCalculator.h"
using namespace std;
template<class T>
void RPNCalculator<T>::push(T operand)
{
    stackdata.push(operand);
}


// adds the last two elements in the stack
template<class T>
void RPNCalculator<T>::add()
{
    T operand1, operand2;
    // Get the last element in the stack if it is not empty
    if (!stackdata.empty())
    {
        operand1 = stackdata.top();
        stackdata.pop();
    }
    else // the stack is empty
    {
        logOutput << "+";
        return;
    }
    // If after getting the first operand the stack is not empty, get the second operand
    if (!stackdata.empty())
    {
        operand2 = stackdata.top();
        stackdata.pop();
    }

    else // stack is empty
    {
        logOutput << " + " << operand1;
        return;
    }
   operand1 + operand2;
  
}

// Subract the last two elements in the stack
template<class T>
void RPNCalculator<T>::subtract()
{
    T operand1, operand2;
    // Get the last element in the stack if it is not empty
    if (!stackdata.empty())
    {
        operand1 = stackdata.top();
        stackdata.pop();
    }
    else // the stack is empty
    {
        logOutput << "-";
        return;
    }

    // If after getting the first operand the stack is not empty, get the second operand
    if (!stackdata.empty())
    {
        operand2 = stackdata.top();
        stackdata.pop();
    }

    else // stack is empty
    {
        logOutput << " - " << operand1;
        return;
    }
    T result = operand2 - operand1;
    stackdata.push(result);

    logOutput << operand2 << " - " << operand1;
}
// multiplies the last two elements in the stack
template<class T>
void RPNCalculator<T>::multiply()
{
    T operand1, operand2;
    // Get the last element in the stack if it is not empty
    if (!stackdata.empty())
    {
        operand1 = stackdata.top();
        stackdata.pop();
    }
    else // the stack is empty
    {
        logOutput << "*";
        return;
    }

    if (!stackdata.empty())
    {
        operand2 = stackdata.top();
        stackdata.pop();
    }

    else // stack is empty
    {
        logOutput << " * " << operand1;
        return;
    }
    T result = operand1 * operand2 ;
    stackdata.push(result);
    logOutput << operand2 << " * " << operand1;
}
template<class T>
void RPNCalculator<T>::divide()
{
    T operand1, operand2;
    // Get the last element in the stack if it is not empty
    if (!stackdata.empty())
    {
        operand1 = stackdata.top();
        stackdata.pop();
    }
    else // the stack is empty
    {
        logOutput << "/";
        return;
    }

    if (!stackdata.empty())
    {
        operand2 = stackdata.top();
        stackdata.pop();
    }

    else 
    {
        logOutput << " / " << operand1;
        return;
    }
    T result = operand2 / operand1;
    stackdata.push(result);
    logOutput << operand2 << " / " << operand1;
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

