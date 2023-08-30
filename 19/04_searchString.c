// 4. Write a program to search a string in the list of strings.
#include <stdio.h>
#include <string.h>
int main()
{
    int str_size;
    printf("How many string do you  want to enter\n ");
    scanf("%d", &str_size);
    fflush(stdin);
    char a[str_size][20];
    char k[20];
    for (int i = 0; i < str_size; i++)
    {
        printf("Enter %d string ", i);
        gets(a[i]);
    }
    printf("Enter the string do you wanna search\n");
    gets(k);
    fflush(stdin);
    int i, j, flag = 0;
    for (i = 0; i < 3; i++)
    {
        int d = strcmp(a[i], k);
        if (d == 0)
            flag = 1;
    }
    if (flag == 0)
        printf("%s is not available\n", k);
    if (flag == 1)
        printf("Yes,%s is available\n", k);

    return 0;
}