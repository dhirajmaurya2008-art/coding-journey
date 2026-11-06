#include <stdio.h>

int main()
{
    int arr[2][3][2] = {
        {
            // Block 0
            {1, 2}, // Row 0
            {3, 4}, // Row 1
            {5, 6}  // Row 2
        },
        {
            // Block 1
            {7, 8},  // Row 0
            {9, 10}, // Row 1
            {11, 12} // Row 2
        }
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}