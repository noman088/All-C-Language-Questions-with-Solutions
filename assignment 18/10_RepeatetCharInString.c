// 10. Write a function to find the repeated character in a given string.
#include <stdio.h>
#include <string.h>
void sortstr(char s[])
{
    char temp;
    for (int i = 0; s[i]; i++)
        for (int j = i + 1; s[j]; j++)
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
}
void find_Duplicate(char string[])
{
    for (int i = 0; i < strlen(string); i++)
    {
        int j;
        int flag = 1;
        for ( j = i + 1; string[j]; j++)
            if (string[i] == string[j])
                flag = 0;
            else
            break;
            if(flag==0)
                printf("%c ", string[i]);
            i = j;
    }
}
int main()
{
    char str[20] = {"abhi se aa gaye"};
    sortstr(str);
    printf("Repeated Char : ");
    find_Duplicate(str);

    return 0;
}