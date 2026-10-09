//3.#define preprocessr
#define PI 3.1416
#include <stdio.h>

int main()
{
    //1.Literal Constant:
    int x = 10;                       //Integer constant
    float y = 32.56F;                //Floating-point constant 
    char grade = 'A';               //Character constant 
    char message[] = "Hello-World";//String constant

    printf("Integer: %d\n",x);
    printf("Float: %.2f\n",y);
    printf("Character: %c\n",grade);
    printf("String: %s\n",message);

    //2.const keyword:
    const int MAX_VALUE = 100;
    printf("MAX_VALUE: %d\n",MAX_VALUE);

    //3.#define preprocessor:
    printf("PI: %.4f\n",(PI));

    return 0;
}