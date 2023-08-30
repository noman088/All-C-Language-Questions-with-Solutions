// 8. Write a function to count words in a given string

#include <stdio.h>
int countWords(char s[])
{
    int count = 1;
    for (int i = 0; i < s[i]; i++)
        if (s[i] == ' ' && s[i + 1] != ' ')
            count++;

    return count;
}
int main()
{
    char a[100];
    printf("Enter a string\n");
    fgets(a, 100, stdin);
    printf("%d words ", countWords(a));

    return 0;
}