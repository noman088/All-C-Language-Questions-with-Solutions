// 5. Write a program in C to find the sum of left diagonals of a matrix.
#include <stdio.h>
int main()
{
    int size, dig = 0, sum = 0, I = 0;
    printf("Enter the size of matrix");
    scanf("%d", &size);
    int a[size][size];
    int last = size - 1;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", a[i][j]);
            if (i == I && j == last)
            {
                sum = sum + a[i][j];
                I++;
                last--;
            }
        }
        printf("\n");
    }
    printf("The sum of left diagonal is %d", sum);
    return 0;
}