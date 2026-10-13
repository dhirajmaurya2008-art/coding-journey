#include <stdio.h>

void demo()
{
    auto int x = 10;
    printf("Value of x: %d\n",x);
}

void show(void);
extern int y = 10;

void countCalls()
{
    static int count = 0;
    count++;
    printf("Function called %d times \n",count);
}

void demo1()
{
    register int i;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",i);
    }
}

int main()
{
    //1.auto:
    demo();

    //2.extern:
    int y = 20;
    void show(void);
    printf("%d\n",y);
    show();
    
    //3.static:
    countCalls();
    countCalls();
    countCalls();

    //4.register:
    demo1();

    return 0;
}
void show(void)
{
    printf("%d\n",y);
}