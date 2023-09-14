// 5. Write a program to find the maximum number between two numbers using a pointer
#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter two Numbers");
    scanf("%d%d", &a, &b);
    int *p, *q;
    p = &a;
    q = &b;
    if (p < q)
        printf("%d is max", *q);
    else
        printf("%d is max", *p);
    // printf("The Max Number is %d:", max(&a, &b));
    // max(&a, &b);

    return 0;
}