#include <iostream>
using namespace std;

// Base Class
class Employee
{

public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class Members/Method;
}
Note:
1. Default visibility mode is private.
2. Public visibility mode: Public members of base class becomes public members of derived class
3. Private visibility mode: Public members of base class becomes private members of derived class
4. Private member are never inherited.
*/

// Creating a Programmer class derived from Employee base class
class Programmer : Employee
{
public:
    int languageCode;
    Programmer(int inpid)
    {
        id = inpid;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee dhiraj(1), harsh(2);
    cout << dhiraj.salary << endl;
    ;
    cout << harsh.salary << endl;
    ;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    // cout << skillF.id << endl;  --> gives Error because visibility mode is default private
    skillF.getData();
    return 0;
}
