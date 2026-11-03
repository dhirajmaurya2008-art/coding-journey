#include <iostream>
using namespace std;



int main()
{
    //Basic Example
    int a = 4;
    int *ptr = &a;
    *ptr = 999;
    cout << "The value of a: " << *(ptr) << endl;

    //new operator
    //int *p = new int(40);
    float *p = new float(4.93);
    cout << "The value at address p is: " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    for (int i = 0; i < 3; i++)
    {
        cout << "The value of arr["<<i<<"]"<< " is: " << arr[0] << endl;
    }
    
    //delete operator
    delete p;
    delete[] arr;
    return 0;
}