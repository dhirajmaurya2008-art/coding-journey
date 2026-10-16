#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Consructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initiallize the objects of its class.
    // It is automatically invoked(Call) whenever an object is created.

    Complex(void); // Constructor Declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // ---> This is a default constructor as it takes no parameters.
{
    a = 10;
    b = 0;
    // cout<<"Hello World"<<endl;
}

int main()
{
    Complex c;
    c.printNumber();

    return 0;
}

/*
Characteristics of Constructors:

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return_types.
4. It can have default arguments.
5. We cannot refer to their address.

*/