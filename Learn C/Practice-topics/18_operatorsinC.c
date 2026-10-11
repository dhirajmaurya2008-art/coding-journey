#include <stdio.h>

int main(){
    int a=4, b=5;
    printf("\nOperators in C: Value of a = %d and b = %d \n", a, b);
    printf("Following are the types of operators in C: \n");
    //1.Arithmetic operators:
    printf("The value of a + b is: %d\n",(a+b));
    printf("The value of a - b is: %d\n",(a-b));
    printf("The value of a * b is: %d\n",(a*b));
    printf("The value of a / b is: %.2f\n",(a/b));
    printf("The value of a % b is: %.2f\n",(a%b));
    printf("The value of a++ is: %d\n",(a++));
    printf("The value of a-- is: %d\n",(a--));
    printf("The value of ++a is: %d\n",(++a));
    printf("The value of --a is: %d\n\n",(--a));

    // Assignment Operators --> used to assign values to variables
    printf("Following is Assignment Operator in C: \n");
    a =3, b=9;
    printf("New updated value of a = %d and b = %d\n\n", a, b);
    // char d='d';

    // Comparison or Relational operators
    printf("Following are the comparison operators in C: \n");
    printf("The value of a == b is: %d\n",(a==b));
    printf("The value of a != b is: %d\n",(a!=b));
    printf("The value of a >= b is: %d\n",(a>=b));
    printf("The value of a <= b is: %d\n",(a<=b));
    printf("The value of a > b is: %d\n",(a>b));
    printf("The value of a < b is: %d\n\n",(a<b)); 

    // Logical operators
    printf("Following are the logical operators in C: \n");
    printf("The value of this logical and operator ((a==b) && (a<b)) is: %d\n",((a==b) && (a<b))); 
    printf("The value of this logical or operator ((a==b) || (a<b)) is: %d\n",((a==b) || (a<b))); 
    printf("The value of this logical not operator (!(a==b)) is: %d",(!(a==b))); 


    return 0;
}