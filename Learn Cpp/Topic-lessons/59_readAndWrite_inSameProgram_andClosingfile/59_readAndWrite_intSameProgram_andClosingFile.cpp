#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //Connecting out file with dout
    ofstream dout("sample1.txt");

    //Creating a name string and filling it with the string entered by user
    string name;
    cout << "Enter your name: ";
    cin >> name;
    //Writing a string to a file
    dout << "My name is: " + name;
    //closing file
    dout.close();

    ifstream din("sample1.txt");
    string content;
    getline(din,content);
    cout << "Content of this file is: " << content;
    din.close();
    return 0;
}