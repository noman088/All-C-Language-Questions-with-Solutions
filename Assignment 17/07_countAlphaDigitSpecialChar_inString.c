// 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a aing.
#include <stdio.h>
int main()
{
    int sc = 0, dig = 0, alph = 0;
    char a[20];
    printf("Enter a aing ");
    fgets(a, 20, stdin);
    for (int i = 0; a[i]; i++)
    {
        if (a[i] >= 32 & a[i] <= 47 || a[i] >= 58 && a[i] <= 64)
            sc++;
        if (a[i] >= 48 && a[i] <= 57)
            dig++;

        if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
            alph++;
    }
    int total = sc + dig + alph;
    printf("Total Number  of alphabet digit and special character is %d", total);
    printf("\nIn Which \n Special Character : %d \n Digit : %d \n Alphabet : %d", sc, dig, alph);
    return 0;
}