#include <stdio.h>

int main()
{
    float principleAmount, rateOfInterest, sI;
    int year;

    printf("Enter PrincipleAmount, Rate, and year: ");
    scanf("%f %f %d",&principleAmount, &rateOfInterest, &year);

    sI = ((principleAmount*rateOfInterest*year)/100);
    printf("The simpleInterest is: %2.f",(sI));

    return 0;
}