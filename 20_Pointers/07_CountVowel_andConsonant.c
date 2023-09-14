// 7. Write a program to count the number of vowels and consonants in a string using a
// pointer.

#include <stdio.h>
int main()
{
    char str[] = "noman";
    char *ptr = str;
    printf("%s", *ptr);
    return 0;
}