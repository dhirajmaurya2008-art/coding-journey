#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()  //default constructor
    {
        a = 0;
    }
    Number(int num)   //Parameterized Constructor
    {
        a = num;
    }
    //when no copy constructor is found, compiler suplies its own copy constructor.
    Number(Number &obj)   //Copy Constructor invoked
    {
        cout << endl << "---- Copy Constructor Called ----" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z or x or y
    Number z1(x), z2;
    z1.display();

    z2 = z;  //Copy constructor not called.

    Number z3 = z;  //Copy constructor invoked.
    return 0;
}