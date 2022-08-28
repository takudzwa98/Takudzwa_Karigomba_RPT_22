#include <iostream>
#include <string>
#include <fstream>
#include "RPNCalculator.h"
using namespace std;

void printMenu()
{
    cout << "Enter c to clear the stack" << endl;
    cout << "s to square" << endl;
    cout << "n to negate" << endl;
    cout << "p to pop current value" << endl;
    cout << "q to quit" << endl;
}
void removeEndline(string& input)
{
    for (size_t i = 0; i < input.length(); i++)
        if (input[i] == '\n' || input[i] == '\r')
            input.erase(input.begin() + i);
}