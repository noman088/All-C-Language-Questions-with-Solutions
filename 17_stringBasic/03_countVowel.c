// 3. Write a program to count vowels in a given aing
#include <stdio.h>
int main()
{
    char a[20];
    printf("Enter a ing");
    gets(a);

    int count = 0;
    for (int i = 0; a[i]; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            count++;
    }
    printf(" %d vowel  available ", count);
    return 0;
}