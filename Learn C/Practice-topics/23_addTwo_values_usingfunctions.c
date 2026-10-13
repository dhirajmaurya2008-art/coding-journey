#include <stdio.h>

float add(float,float);
int main()
{
    float num1, num2;

    printf("Enter number for  num1 and num2: ");
    scanf("%f%f", &num1, &num2);

    printf("Adding num1 = %.2f and num2 = %.2f is: %.2f.", num1, num2, add(num1, num2));
    return 0;
}
float add(float a, float b)
{
    return (a+b);
}