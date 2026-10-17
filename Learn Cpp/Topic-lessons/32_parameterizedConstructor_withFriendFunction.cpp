#include <iostream>
#include <math.h>
using namespace std;

class Point2;

class Point1
{
    int x1, y1;
    
public : 
    Point1(int a1, int b1)
    {
        x1 = a1;
        y1 = b1;
    }
    
    void displayPoint1()
    {
        cout <<"The point is (" << x1 << ", " << y1 << ")" <<endl;
    }
    
    friend void displayDistance(Point1, Point2);
};

class Point2
{
    int x2, y2;
public:
    Point2(int a2, int b2)
    {
        x2 = a2;
        y2 = b2;
    }
    
    void displayPoint2()
    {
        cout <<"The point is (" << x2 << ", " << y2 << ")" <<endl;
    }
    friend void displayDistance(Point1, Point2);
};

void displayDistance(Point1 p1, Point2 q2)
{
    float dis = sqrt(pow(q2.x2-p1.x1,2)+(pow(q2.y2-p1.y1,2)));
    cout << "Distance between two point is: " << dis << endl;
}


int main()
{
    Point1 p(1,1);
    p.displayPoint1();
    Point2 q(4,6);
    q.displayPoint2();

    displayDistance(p, q);

    return 0;
}