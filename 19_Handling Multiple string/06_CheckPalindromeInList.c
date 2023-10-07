// 6. Write a program to print the strings which are palindrome in the list of strings.
#include <stdio.h>
#include <string.h>
int strlength(char *str)
{
    int i;
    for (i = 0; str[i]; i++)
        ;
    return i - 1;
}

int checkPalindrome(char *s)
{
    int l = strlength(s);
    for (int i = 0; i < (l / 2); i++, l--)
    {
        if (s[l - 1] != s[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a, flag = 0;
    printf("How many string do you want to enter\n");
    scanf("%d", &a);
    fflush(stdin);
    char str[a][100];
    printf("Please Enter the strings\n");
    for (int i = 0; i < a; i++)
        fgets(str[i], 100, stdin);
    printf("\n");
    printf("Here are palindrome strings:\n");
    for (int i = 0; i < a; i++)
    {
        if (checkPalindrome(str[i]) == 1)
        {
            flag = 1;
            printf("%s", str[i]);
        }
    }
    if (flag == 0)
        printf("There is no any palindorm string");

    return 0;
}