// 10. Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
int main()
{
    char a[20];
    int count = 0;
    printf("Enter a aing");
    fgets(a, 20, stdin);
    for (int i = 0; a[i]; i++)
        for (int j = 0; j < a[j]; j++)
            if (a[i] < a[j])
            {
                char temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

    for (int i = 0; a[i]; i++)
        for (int j = i + 1; j < a[j]; j++)
            if (a[i] == a[j])
                count++;

    printf("frequency %d times found ", count);

    return 0;
}