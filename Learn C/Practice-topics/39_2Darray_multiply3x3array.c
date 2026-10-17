#include <stdio.h>

int main()
{
    int matrix1[3][3], matrix2[3][3], multi[3][3];

    printf("Enter matrix1 values: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("Enter matrix2 values: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\nMatrix1 values: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix2 values: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplying matrix1 and matrix2: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            multi[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                multi[i][j] += matrix1[i][k] * matrix2[k][j]; 
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",multi[i][j]);
        }
        printf("\n");
    }

    return 0;
}