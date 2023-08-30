// 6. Write a function to check whether a given sing is an alphanumeric sing or not.
// (Alphanumeric sing must contain at least one alphabet and one digit)
#include <stdio.h>
void checkAlphNumeric(char s[])
{
    for (int i = 0; s[i]; i++)
        if ((s[i] >= 48 && s[i] <= 57) & (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122))
        {
            printf("Yes This is an AlphNumeric String");
            return;
        }

    printf("Strin is not an AlphaNumeric String");
    
}
int main()
{
    char str[20];
    printf("Enter a String \n");
    fgets(str, 20, stdin);
    checkAlphNumeric(str);

    return 0;
}