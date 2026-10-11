#include <stdio.h>

int add(int, int);
int main()
{
    //1.Break:
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d ",i);
    }
    printf("\n");

    //2.continue:
    for (int i = 1; i <= n; i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d ",i);
    }
    printf("\n");

    //3.goto:
    int age;
    read:
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age<18)
    {
        printf("You are not matured\n");
        goto read;
    }
    else 
    {
        goto next;
    }
    next:
    printf("Yes you are eligible for voting...\n");

    //4.return:
    int m = 200, z = 300;
    printf("Adding %d and %d is: %d\n", m, z, add(m,z));

    return 0;
}

int add(int x, int y)
{
    return (x+y);
}