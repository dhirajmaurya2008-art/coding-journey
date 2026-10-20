#include <iostream>
using namespace std;

class BankDeposit
{
    int principle;
    int year;
    float interestRate;
    float returnValue;
public:
    BankDeposit(){}
    BankDeposit(int p,int y, float r); //r can be a value like 0.04
    BankDeposit(int p,int y, int r); //r can be a value like 14
    void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principle = p;
    year = y;
    interestRate = r;
    returnValue = principle;
    
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1+interestRate);
    }
    
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principle = p;
    year = y;
    interestRate = float(r)/100;
    returnValue = principle;
    
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1+interestRate);
    }
    
}

void BankDeposit :: show()
{
    cout << endl << "Principle amount was " << principle
         << ". Return value after " << year
         << " years is " << returnValue << endl;         
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter value of p, y and r: ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();
    
    cout << "Enter value of p, y and R: ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p,y,R);
    bd2.show();
    
    bd3.show();
    return 0;
}