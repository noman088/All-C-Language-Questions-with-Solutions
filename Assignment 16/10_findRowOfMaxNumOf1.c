// 10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
int main()
{

    int size;
    printf("enter the size of matrix : ");
    scanf("%d", &size);
    int a[size][size];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%d", &a[i][j]);

    int max = 0, row;
    for (int i = 0; i < size;i++)
    {
        for (int j = 0; j < size;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < size;i++)
    {
        for (int j = 0; j < size;j++)
        {
            printf("%d", a[i][j]);
        }
    }

        printf("%d has maximum number of rows", row);

    return 0;
}
