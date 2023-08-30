// 4. Write a program to convert a given aing into uppercase

#include <stdio.h>
int main()
{
    char a[20];
    printf("Enter a aing  ");
    gets(a);
    for (int i = 0; a[i]; i++)
    {
        a[i] = a[i] - 32;
        printf("%c", a[i]);
    }

    return 0;
}