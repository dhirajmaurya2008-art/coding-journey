#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter base and height of triangle: ");
    scanf("%f%f", &base, &height);

    area = (0.5*base*height);
    printf("Area of triangle with base %.2f and height %.2f is: %.2f.", base, height, area);

    return 0;
}