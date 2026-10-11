#include <stdio.h>

int main()
{
    int i = 1, num = 10;
    
    //1.for() loop:
    for (int j = 1; j <= num; j++)
    {
        printf("%d ",j);
    }
    printf("\n");

    //2.while() loop:
    while(i <= num)
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");
    
    //3.do-while() loop:
    i=1;
    do
    {
        printf("%d ",i);
        i++;
    }while (i <= num);
    
    

    return 0;
}