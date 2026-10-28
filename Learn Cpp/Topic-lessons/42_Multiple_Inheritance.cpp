#include <iostream>
using namespace std;

/*
Syntax for Inheriting in multiple inheritance:
class Derived : visibility-mode base1, visibility-mode base2
{
    Class body of "Derived"
}
*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is: " << base1int << endl;
        cout << "The value of Base2 is: " << base2int << endl;
        cout << "The sum of " << base1int << " and " << base2int << " is: " << ((base1int) + (base2int)) << endl;
    }
};

//The inherited derived class will look something like this:
//Data Members:
    //base1int --> protected
    //base2int --> protected
//Member Functions:
    //set_base1int() --> public
    //set_base2int() --> public
int main()
{
    Derived tony;
    tony.set_base1int(23);
    tony.set_base2int(53);
    tony.show();

    return 0;
}