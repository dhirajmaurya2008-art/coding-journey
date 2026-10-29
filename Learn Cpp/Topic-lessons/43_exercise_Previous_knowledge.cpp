#include <iostream>
#include <cmath>
using namespace std;
/*
Create 2 classes:
  1. SimpleCalculator - take inputs of two numbers using utility function and performs +, -, *, /
                        and displays the results.
  2. ScientificCalculator - Takes inputs of 2 numbers using a utility function and performs any four
                        scientific operation of your choice and displays the results.

Create another class HybridCalculator and inherit it using these 2 classes above.
*/
class SimpleCalculator
{
    char op;
    float num1;
    float num2;

public:
    void inputNumber();
    void operationOnNumber();
};

void SimpleCalculator::inputNumber()
{
    cout << "Enter Number1: ";
    cin >> num1;
    cout << "Enter Number2: ";
    cin >> num2;
    cout << "------------------------------" << endl;
    cout << "Enter Operations to perform(+,-,*,/,%): ";
    cin >> op;
    operationOnNumber();
}

void SimpleCalculator::operationOnNumber()
{
    switch (op)
    {
    case '+':
        cout << "Addition of " << num1 << " and " << num2 << " is: " << ((num1) + (num2)) << endl;
        break;
    case '-':
        cout << "Subtraction of " << num1 << " and " << num2 << " is: " << ((num1) - (num2)) << endl;
        break;
    case '*':
        cout << "Multiplication of " << num1 << " and " << num2 << " is: " << ((num1) * (num2)) << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Division of " << num1 << " by " << num2 << " is: " << ((num1) / (num2)) << endl;
        }
        else
        {
            cout << "Error : Division by zero is not possible." << endl;
        }
        break;
    default:
        cout << "Invalid Operator!" << endl;
        break;
    }
}

class ScientificCalculator
{
    float number1;
    float number2;
    int ope;

public:
    void userInput();
    void scientificOperations();
};

void ScientificCalculator::userInput()
{
    cout << "------------------------------" << endl;
    cout << "------------------------------" << endl;
    cout << "Enter Number1: ";
    cin >> number1;
    cout << "Enter Number2: ";
    cin >> number2;
    cout << "------------------------------" << endl;
    cout << "Enter Operations to perform(1.sq, 2.root, 3.cube): ";
    cin >> ope;
    scientificOperations();
}

void ScientificCalculator::scientificOperations()
{
    switch (ope)
    {
    case 1:
        cout << "Square of " << number1 << " and " << number2 << " is: " << (number1 * number1) << " and " << (number2 * number2) << endl;
        break;
    case 2:
        cout << "SquareRoot of " << number1 << " and " << number2 << " is: " << sqrtf(number1) << " and " << sqrtf(number2) << endl;
        break;
    case 3:
        cout << "Cube of " << number1 << " and " << number2 << " is: " << (number1 * number1 * number1) << " and " << (number2 * number2 * number2) << endl;
    default:
        cout << "Invalid Operator!" << endl;
        break;
    }
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator 
{

};

int main()
{
    HybridCalculator operation;
    operation.inputNumber();
    operation.userInput();
    // SimpleCalculator op1;
    // op1.inputNumber();
    // ScientificCalculator op2;
    // op2.userInput();

    return 0;
}