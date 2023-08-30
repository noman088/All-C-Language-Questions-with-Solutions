// 5. Write a function to transform a sing into lowercase

#include <stdio.h>
void lowercase(char s[])
{
    for (int i = 0; s[i]; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    printf("string after lowercase is : %s", s);
}

int main()
{
    char s[20];
    printf("Enter string \n");
    fgets(s, 20, stdin);
    lowercase(s);

    return 0;
}