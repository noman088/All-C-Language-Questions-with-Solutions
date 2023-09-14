// 7. Write a program to count the number of vowels and consonants in a string using a
// pointer.

#include <stdio.h>
int main()
{
    char str[] = "noman";
    char *ptr = str;
    int v = 0, c = 0;
    for (int i = 0; ptr[i]; i++)
        if (ptr[i] == 'a' || ptr[i] == 'e' || ptr[i] == 'i' || ptr[i] == 'o' || ptr[i] == 'u')
            v++;
        else
            c++;

    printf("%s has %d vowels and %d consonant", ptr, v, c);

    return 0;
}