// 3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
int main()
{

    int row, col;
    printf("Enter the size of row");
    scanf("%d", &row);
    printf("Enter the size of column");
    scanf("%d", &col);
    int ar[row][col];
    printf("Enter Element in matrix");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &ar[i][j]);
    printf("Transpose of the matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", ar[j][i]);
        }
        printf("\n");
    }
    return 0;
}