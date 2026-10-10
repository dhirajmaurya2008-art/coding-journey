#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    printf("Previus character: %c \n",ch-1);
    printf("Current character: %c \n",ch);
    printf("Next character: %c \n",ch+1);

    return 0;
}