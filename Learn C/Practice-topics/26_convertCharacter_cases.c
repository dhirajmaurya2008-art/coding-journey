#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(isalpha(ch))
    {
        if(isupper(ch))
        {
            printf("\nThe character %c is uppercase alphabet.\n",ch);
            ch = tolower(ch);
            printf("Converted to lowercase: %c\n",ch);
        }
        else
        {
            printf("\nThe character %c is lowercase alphabet.\n",ch);
            ch = toupper(ch);
            printf("Converted to uppercase: %c\n",ch);
        }
    }
    else if(isdigit(ch))
    {
        printf("The character %c is a digit.\n",ch);
    }   
    else
    {
        printf("The character %c is a punctuation symbol or other character.\n",ch);
    }


    return 0;
}