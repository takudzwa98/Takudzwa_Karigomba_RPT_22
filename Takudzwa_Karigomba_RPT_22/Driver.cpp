#include <iostream>
#include <string>
#include <fstream>
#include "RPNCalculator.h"
#include "RPNCalculator.cpp"
using namespace std;


void printMenu()

{
    cout << "Welcome to the RPNCalculator by Takudzwa Karigomba" << endl;
    cout << "Enter c to clear the stack" << endl;
    cout << "s to square" << endl;
    cout << "n to negate" << endl;
    cout << "+ to add" << endl;
    cout << "- to minus" << endl;
    cout << "/ to divide" << endl;
    cout << "* to multiply" << endl;
    cout << "p to pop current value" << endl;
    cout << "q to quit" << endl;
}

void removeEndline(string& input)
{
    for (size_t i = 0; i < input.length(); i++)
        if (input[i] == '\n' || input[i] == '\r')
            input.erase(input.begin() + i);
}

int main(int argc, char** argv)
{

    RPNCalculator<double> calculator;

    printMenu();
    while (true)
    {
        //h ttps://www.youtube.com/watch?v=o4pc33N6jOo
        if (calculator.isEmpty())
        {
            cout << "X> ";
        }
        else
        {
            cout << calculator.value() << "> ";
        }
        string input;
        getline(cin, input);
        removeEndline(input);
        if (input == "q")
        {
            break;
        }
        else if (input == "+")
        {
            calculator.add();
        }
        else if (input == "-")
        {
            calculator.subtract();
        }
        else if (input == "*")
        {
            calculator.multiply();
        }
        else if (input == "/")
        {
            calculator.divide();
        }
        else if (input == "c")
        {
            calculator.clear();
        }
        else if (input == "n")
        {
            calculator.negate();
        }
        else if (input == "s")
        {
            calculator.square();
        }
        else if (input == "p")
        {
            calculator.pop();
        }
        else
        {
            try
            {
                //h ttps://cplusplus.com/reference/string/stod/
                double operand = std::stod(input.c_str());
                calculator.push(operand);
            }
            catch (...)
            {
                cout << "invalid input" << endl;
            }
        }
    }
    cout << "Bye!!!" << endl;

    return 0;
}
