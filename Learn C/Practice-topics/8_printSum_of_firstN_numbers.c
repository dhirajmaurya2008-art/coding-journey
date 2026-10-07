#include <stdio.h>

int main()
{
    int num = 1;
    int n, i;

    printf("Enter value of n: ");
    scanf("%d",&n);

    printf("\nPrinting: \n");
    for(i = 1; i <= n; i++)
    {
        if(num <= n)
        {
            printf("%d ",num);
        }
        num = num + 1;
    }


    return 0;
}