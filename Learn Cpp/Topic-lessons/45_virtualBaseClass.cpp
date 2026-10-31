#include <iostream>
using namespace std;

/*
Student ---> Test[Done]
Student ---> Sport[Done]
Test    ---> Result[Done]
Sport   ---> Result[Done]
*/
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }

    void print_number(void)
    {
        cout << "Your RollNumber is: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }

    void print_marks(void)
    {
        cout << "You result are: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student 
{
    protected:
    float score;
    public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
    private:
    float total;
    public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        
        cout << "Your total Score is: " << total << endl;
    }
};


int main()
{
    Result dhiraj;
    dhiraj.set_number(4200);
    dhiraj.set_marks(79.40, 99.5);
    dhiraj.set_score(9);
    dhiraj.display();

    

    return 0;
}