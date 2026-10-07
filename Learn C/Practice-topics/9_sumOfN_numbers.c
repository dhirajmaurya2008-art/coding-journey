#include <stdio.h>

int main()
{
    int sum = 0;
    int n, i;

    printf("Enter value of n: ");
    scanf("%d",&n);

    printf("Printing sum of n numbers: ");
    for(i = 1; i <= n; i++)
    {
        if(i <= n)
        {
            sum = sum + i;
        }
    }

    printf("%d",sum);

    return 0;
}
