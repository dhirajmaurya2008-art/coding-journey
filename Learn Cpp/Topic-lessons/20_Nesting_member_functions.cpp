// OOPS - Classes and Objects

// C++ --> initially called --> C with classes by stroustoup
// Class --> extension of structures (in C)
// Structures had limitations
//         - members are public
//         - No methods
// Classes --> structures + more
// Classes --> can have methods and properties
// Classes --> can make few members as private & few as public
// Structure in C++ are typedefed(already)
// You can declare objects along with the class declaration (not recommended method)
/*  class employee {
            //Class definition
    } harry, rohan, lovish;     */
// harry.salary = 8 --> makes no sense f salary is private..

#include <iostream>
#include <string>
using namespace std;

class binary                                  // Class binary
{
// private:                                  // By default private modifier
    string s;
    void chk_bin(void);                 // Now making chk_bin() func private so cannot be used outside..

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();                              // Nesting member --> func chk_bin() in ones_compliment()
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    // Nesting of member functions
    binary b;
    b.read();
//  b.chk_bin();                          // Cannot be used chk_bin() func as it is private.      
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}