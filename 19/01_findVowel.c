// 1. Write a program to find the number of vowels in each of the 5 string stored in two
// dimensional arrays, taken from the user.
#include <stdio.h>
int main()
{
    char str[5][20];
    printf("Enter 5 string\n");
    for (int i = 0; i < 5; i++)
        fgets(str[i], 20, stdin);
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        count = 0;

        for (int j = 0; str[i][j]; j++)
        {
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u' || str[i][j] == 'A' || str[i][j] == 'E' || str[i][j] == 'I' || str[i][j] == 'O' || str[i][j] == 'U')
                count++;
        }
        printf("%d Vowel in %s", count, str[i]);
    }
    return 0;
}