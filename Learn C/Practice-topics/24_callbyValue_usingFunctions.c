#include <stdio.h>
 
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside swapping: a = %d, b = %d\n", x, y);
}
 
int main()
{
    int a, b;
 
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
 
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swapping: a = %d, b = %d\n", a, b);
 
    return 0;
}