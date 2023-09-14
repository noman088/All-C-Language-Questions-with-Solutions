// 10. Write a program to print a string in reverse using a pointer
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "noman";
    char *p = str;
    printf("Before  Reverse : %s\n", p);
    int s = strlen(p);
    for (int i = 0; i <= s / 2; i++, s--)
    {
        char temp = p[i];
        p[i] = p[s - 1];
        p[s - 1] = temp;
    }
    printf("After Reverse : %s", p);

    return 0;
}