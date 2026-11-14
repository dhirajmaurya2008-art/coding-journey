#include <iostream>
#include <fstream>
using namespace std;

/*
Useful classes for working with files in cpp are:
1]fstream  --> base class
2]ifstream  --> derived from fstream
3]ofstream  --> derived from fstream
*/

// In order to work with files in cpp you will have to open it. Primarilly there are 2 ways to open a file:
// 1.Using a constructor 
// 2.Using member function open() of the class  

int main()
{
    string str1 = "Dexter Morgan";
    //Opening files using constructor and writing in it
    ofstream out("sample1.txt"); 
    out << str1;

    string str2;
    //Opening files using constructor and reading to it
    ifstream in("sample2.txt"); 
    // in >> str2;
    getline(in,str2);
    cout << str2;
    
    return 0;
}