// 1. Write a function to swap values of two int variables of calling function. (TSRS)
#include <stdio.h>
void swap(int *p, int *q)
{
    int z = *p;
    *p = *q;
    *q = z;
    printf("%d and %d", *p, *q);
}
int main()
{

    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);

    return 0;
}