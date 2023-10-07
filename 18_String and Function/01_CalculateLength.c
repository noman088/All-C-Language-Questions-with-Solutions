// 1. Write a function to calculate length of the sing

#include <stdio.h>
int slength(char st[])
{
    int i;
    for (i = 0; st[i]; i++)
        ;
    return i-1;
}
int main()
{
    char s[20];
    printf("Enter a string\n");
    fgets(s, 20, stdin);
    printf("Length of String is %d", slength(s));
    return 0;
}