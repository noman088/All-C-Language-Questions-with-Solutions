// 3. Write a program to read and display a 2D array of strings in C language.
#include <stdio.h>
int main()
{

    int col, row;
    printf("How many rows do you want : ");
    scanf("%d", &row);
    printf("How many column do you want : ");
    scanf("%d", &col);

    char str[row][col][50];
    char a[row][col];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%s", str[i][j]);

    printf("\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%s ", str[i][j]);
        printf("\n");
    }
    return 0;
}
