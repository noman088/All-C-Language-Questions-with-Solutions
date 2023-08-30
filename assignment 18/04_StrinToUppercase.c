// 4. Write a function to transform sing into uppercase

#include <stdio.h>
void uppercase(char s[])
{
    for (int i = 0; s[i]; i++)
        if(s[i]>='a'&&s[i]<='z')
            s[i] -= 32;
    printf("string after uppercase : %s", s);
}

int main()
{
    char s[20];
    printf("Enter string \n");
    fgets(s, 20, stdin);
    uppercase(s);

    return 0;
}