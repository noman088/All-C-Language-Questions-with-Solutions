#include <stdio.h>
int main()
{
    int size, k, sum = 0;
    printf("Enter the size of a matrix");
    scanf("%d", &size);
    int a[size][size];
    k = size-1;
    printf("Enter Element in matris\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            scanf("%d", &a[i][j]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == k)
            {
                sum = sum + a[i][j];
                k--;
            }

            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of right Diagonal is %d", sum);

    return 0;
}