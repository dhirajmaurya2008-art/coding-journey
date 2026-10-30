#include <iostream>
using namespace std;

// Ambiguity 1
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet();
    }
};

// Ambiguity 2
class B
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class D : public B
{
    int a;
    // D's class say() method will overide B's class say() method
public:
    void say()
    {
        cout << "Hello my lord!" << endl;
    }
};

int main()
{
    // Ambiguity 1
    //  Base1 base1obj;
    //  base1obj.greet();
    //  Base2 base2obj;
    //  base2obj.greet();
    //  Derived d;
    //  d.greet();

    //Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();

    return 0;
}