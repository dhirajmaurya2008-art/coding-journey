//Multilevel Inheritance
#include <iostream>
using namespace std;

class Student   //Class 1
{
protected:
    int roll_number;
public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};

void Student :: set_rollnumber(int r)
{
    roll_number = r;
}

void Student :: get_rollnumber()
{
    cout << "The roll number is: " << roll_number << endl;
}

class Exam : public Student   //Class 2
{
    protected:
    float maths;
    float phy;
    public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam :: set_marks(float m,float p)
{
    maths = m;
    phy = p;
}

void Exam :: get_marks()
{
    cout << "The marks obtained in maths is: " << maths << " and in physics is: " << phy << endl;
}

class Result : public Exam     //Class 3
{
    float percentage;
    public:
    void display();
};

void Result :: display()
{
    get_rollnumber();
    get_marks();
    cout << "Your percentage is: " << ((maths+phy)/2) <<"%"<< endl;
}

int main()
{
    /*
    Notes:
       If we are inheriting B from A and C from B: [ A ---> B --> C ]
        1.A is the base class for B and B is the base class for C
        2.ABC is called Inheritance Path 
    */
   
    Result drdoom;
    drdoom.set_rollnumber(420);
    drdoom.set_marks(94.0, 90.0);
    drdoom.display();

    return 0;
}
