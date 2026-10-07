#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Maximum number from %d, %d, and %d is: %d", a, b, c, ((a>b) ? a : b));
    return 0;
}