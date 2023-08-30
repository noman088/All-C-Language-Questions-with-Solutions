// 7. Write a function to check whether a given sing is palindrome or not.
#include <stdio.h>

int strlength(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
        ;
    return i - 1;
}
void checkPalindrome(char s[])
{
    int l = strlength(s);
    for (int i = 0; i < (l / 2); i++, l--)
    {
        if (s[l - 1] != s[i])
        {
            printf("This is not a palindrome string\n");
            return;
        }
    }
    printf("This is a palindrome String\n");
}

int main()
{
    char s[20];
    printf("Enter a string ");
    fgets(s, 20, stdin);
    checkPalindrome(s);

    return 0;
}
