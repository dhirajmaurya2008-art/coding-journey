#include <iostream>
#include <cstring>
using namespace std;

class Course
{
protected:
    string title;
    float rating;

public:
    Course(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(){
        cout << "This is BaseClass Display Function" << endl;
    }
};

class CourseVideo : public Course
{
    float videoLength;
    public:
    CourseVideo(string s, float r, float vL) : Course(s, r)
    {
        videoLength = vL;
    }
    void display()
    {
        cout << "This is a amazing video with title: " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << endl << endl;
    }
};

class CourseText : public Course
{
    int words;
    public:
    CourseText(string s, float r, int wc) : Course(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is a amazing text tutorial with title: " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << endl << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    //For Video:
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CourseVideo djvideo(title, rating, vlen);
    //djvideo.display();

    //For Text:
    title = "Django tutorial textual";
    words = 456;
    rating = 3.89;
    CourseText djtext(title, rating, words);
    // djtext.display();

    Course *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();

    //Rules for virtual functions
    // 1. They cannot be static.
    // 2. They are accessed by object pointers.
    // 3. Virtual functions can be a friend of another class.
    // 4. A virtual function in base class might not be used.
    // 5. A virtual function is defined in a base class, there is 
    //    no necessity of redefining it in the derived class

    return 0;
}