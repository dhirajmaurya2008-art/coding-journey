#include <iostream>
using namespace std;


class Employee
{
    private:
         int a, b, c;

    public:
         int d, e;
         void setData(int a1,int b1,int c1);             //Declaration of func setData()
         void getData()                               //Declaration and definition of func getData()
         {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
         }
};


void Employee :: setData(int a1,int b1,int c1)
{
    a = a1;
    b = b1;
    c = c1;
}


int main()
{
    Employee harsh;
    harsh.d = 45;
    harsh.e = 75;
    harsh.setData(2,4,3);
    harsh.getData();
    return 0;
}