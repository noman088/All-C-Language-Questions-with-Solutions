// 9. Write a program to print the elements of an array in reverse order.
#include <stdio.h>
int main()
{

    int *p, a[5] = {1, 2, 3, 4, 5};
    p = a;
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}