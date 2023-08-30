// 3. Write a function to compare two strings.

#include <stdio.h>
void compare(char s1[], char s2[])
{
    for (int i = 0; s2[i]; i++)
        if (s1[i] != s2[i])
        {
            printf("string are not same");
            return;
        }
    printf("string are same");
}
int main()
{
    char s1[20], s2[20];
    printf("Enter first  string\n");
    fgets(s1, 20, stdin);
    printf("Enter second string\n");
    fgets(s2, 20, stdin);
    //Kindly use upper case or lower case in both string 
    
    compare(s1, s2);

    return 0;
}