#include <stdio.h>

int main()
{
    //1.simple if():
    int num = 3000;
    if(num == 3000)
    {
        printf("Love you 3000\n");
    }
    printf("Out of body\n");

    //2.if-else():
    int a = 10, b = 20;
    if(a>b)
    {
        printf("Maximum = %d\n",a);
    }
    else
    {
        printf("Maximum = %d\n",b);
    }

    //3.nested_if-else():
    int x = 100, y = 200, z = 300;
    if((x>=y) && (x>=z))
    {
        printf("Maximum = %d\n",x);
    }
    else if((y>=x) && (y>=z))
    {
        printf("Maximum = %d\n",y);
    }
    else
    {
        printf("Maximum = %d\n",z);
    }

    //4.else-if() ladder:
    int age = 25;
    if((age>=18) && (age<100))
    {
        printf("You are eligible of voting\n");
    }
    else if(age>=100)
    {
        printf("You are eligible but we suggest take a rest\n");
    }
    else
    {
        printf("You are not eligible\n");
    }


    return 0;
}