#include <stdio.h>

int main()
{
    // Switch Statements:
    int x = 3;

    switch (x)
    {
    case 1:
        printf("\nResult = 1");
        break;
    case 2:
        printf("\nResult = 2");
        break;
    case 3:
        printf("\nResult = 3");
        break;
    default:
        printf("\nInvalid");
        break;
    }

    return 0;
}