// 9. Write a C program to sort a aing array in ascending order.
#include <stdio.h>
int main()
{
    char a[50];
    printf("Enter a aing");
    fgets(a, 50, stdin);
    for (int i = 0; a[i]; i++)
        for (int j = 0; j < a[j]; j++)
            if (a[i] < a[j])
            {
                char temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    printf("Sorted aing is => %s", a);
    return 0;
}
