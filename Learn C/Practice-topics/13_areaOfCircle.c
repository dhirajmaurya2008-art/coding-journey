#include <stdio.h>

int main()
{
    float radius, area;
    const float PI = 3.1416;

    printf("Enter radius of circle: ");
    scanf("%f",&radius);

    area = (PI*radius*radius);
    printf("Area of circle with radius %.4f is: %.4f.", radius, area);

    return 0;
}