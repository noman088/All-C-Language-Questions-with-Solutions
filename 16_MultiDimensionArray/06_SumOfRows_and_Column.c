// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of a Matrix\n");
    scanf("%d", &size);
    int a[size][size];
    printf("Enter Element in Matrix");
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &a[i][j]);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of rows and column is %d", sum);
    return 0;
}