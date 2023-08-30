// 2. Write a function to reverse a string.
#include <stdio.h>
int s;
int length(char s[])
{
    int i;
    for (i = 0; s[i]; i++)
        ;
    return i - 1;
}
void reverse(char s[])
{
    int l = length(s);
    for (int i = 0; i < l / 2; i++, l--)
    {
        char temp;
        temp = s[l - 1];
        s[l - 1] = s[i];
        s[i] = temp;
    }
    printf("sing After Reverse : %s", s);
}
int main()
{
    char a[20];
    printf("Enter a string :\n");
    fgets(a, 20, stdin);
    reverse(a);
    return 0;
}
