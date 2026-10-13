#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id: ";
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)                         // Static Function
    {
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee ::count; // Default value of static variable is 0

int main()
{
    Employee dhiraj, harsh, dinesh;
    // dhiraj.id = 1;
    // dhiraj.count = 2;    // Cannot do this as id and count are private.

    dhiraj.setData();
    dhiraj.getData();
    Employee :: getCount();

    harsh.setData();
    harsh.getData();
    Employee :: getCount();

    dinesh.setData();
    dinesh.getData();
    Employee :: getCount();
    return 0;
}