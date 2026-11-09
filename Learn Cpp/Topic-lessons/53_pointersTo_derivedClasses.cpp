#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class variable var_base: " << var_base << endl;
        cout << "Displaying Base class variable var_derived: " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer; // Baseclass pointer
    BaseClass obj_base;           // Baseclass object
    DerivedClass obj_derived;     // Derivedclass object
    base_class_pointer = &obj_derived; //Pointing to base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 34;  will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer; //Derivedclass pointer
    derived_class_pointer = &obj_derived; //Pointing to drived class pointer to derived class
    derived_class_pointer->var_base = 9899;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}