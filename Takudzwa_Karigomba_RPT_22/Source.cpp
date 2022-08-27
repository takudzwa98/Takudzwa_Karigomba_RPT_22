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
