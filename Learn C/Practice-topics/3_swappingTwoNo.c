#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20;
    int temp;

    printf("Before Swapping:\n   a = %d and b = %d. ", num1, num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter Swapping:\n   a = %d and b = %d. ", num1, num2);


    return 0;
}