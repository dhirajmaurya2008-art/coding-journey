#include <stdio.h>

int main()
{
    int matrix1[2][2], matrix2[2][2], add[2][2];

    printf("Enter matrix1 values: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("Enter matrix2 values: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\nMatrix1 values: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix2 values: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtracting matrix1 and matrix2: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            add[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }

   return 0;
}