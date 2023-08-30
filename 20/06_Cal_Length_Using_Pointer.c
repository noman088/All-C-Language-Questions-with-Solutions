// 6. Write a program to calculate the length of the string using a pointer
#include <stdio.h>
int main()
{
    int i;
    char str[] = "noman";
    char *ptr = str;
    for (i = 0; ptr[i]; i++)
        ;
    printf("length :%d  ", i);
    return 0;
}