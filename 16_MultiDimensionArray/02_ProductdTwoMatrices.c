// 2. Write a program to calculate the product of two matrices each of order 3x3.

#include <stdio.h>
int main()
{
    // int row, col;
    // printf("Enter size of rows: ");
    // scanf("%d", &row);
    // printf("Enter size of columns: ");
    // scanf("%d", &col);
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("Enter Element of first Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter Element in Second Matrix");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    

    return 0;
}