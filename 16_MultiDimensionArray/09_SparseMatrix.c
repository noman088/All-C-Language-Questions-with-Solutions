// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
int main()
{
    int row, col, count = 0;
    printf("Enter size of rows : ");
    scanf("%d", &row);
    printf("Enter Colum of Column : ");
    scanf("%d", &col);
    int a[row][col];
    int size = row * col;
    printf("Enter elements in Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[row][col]);
            if (a[row][col] == 0)
                count++;
        }
    }

    if (count > (size / 2))
        printf("This is Sparsh Matrix");
    else
        printf("This is not sparsh Matrix");
    return 0;
}