// Write a program to calculate the length of the aing. (without using built-in method)
#include <stdio.h>
int main()
{
    char ar[20];
    printf("Enter a aing");
    gets(ar);
    // int s = alength(ar);
    int i;
    for (i = 0; ar[i];i++)
        ;
        printf("Lenght is  jo hai wo %d hai", i);
    return 0;
}
int alength(char *a)
{
    int i;
    for (i = 0; a[i]; i++)
        ;
    return i;
}
