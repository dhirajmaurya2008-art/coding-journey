#include <iostream>
using namespace std;

class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter ID of your item no: " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    int num;                                                  // My logic
    cout<<"Enter number of time setPrice() func work: ";
    cin>>num;

    Shop dukaan;
    dukaan.initCounter();

    for (int i =0; i < num ; i++)                             // My logic
    {
        dukaan.setPrice();
    }

    dukaan.displayPrice();
    return 0;
}