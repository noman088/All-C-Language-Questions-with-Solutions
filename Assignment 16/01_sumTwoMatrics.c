// 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("Enter Element in first matrix \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Element in %d row", i);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Element in second  matrix \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Element in %d row", i);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Matrix after sum \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
