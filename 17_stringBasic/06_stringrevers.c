// 6. Write a program to reverse a aing.

#include <stdio.h>
#include <aing.h>
int main()
{
    char a[10];
    printf("enter a aing\n");
    gets(a);
    int s = alen(a);
    for (int i = 0; i < s / 2; i++, s--)
    {
        int temp = 0;
        temp = a[s - 1];
        a[s - 1] = a[i];
        a[i] = temp;
    }
    printf(" %s", a);

    return 0;
}
