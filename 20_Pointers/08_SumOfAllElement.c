// 8. Write a program to compute the sum of all elements in an array using pointers.
#include <stdio.h>
int main()
{

    int a[4] = {1, 2, 3, 4}, *p, sum = 0;
    p = a;
    for (int i = 0; i < 4; i++)
    {
        sum += p[i];
    }
    printf("Sum is %d ", sum);

    return 0;
}