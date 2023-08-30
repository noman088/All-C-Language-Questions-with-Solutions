// 5. Write a program to find the maximum number between two numbers using a pointer
#include <stdio.h>
int max(int *a, int *b)
{
    int n, m;
    n = *a;
    m = *b;
    printf("%d and %d", a, b);

    return 0;
}

int main()
{

    int a, b;
    printf("Enter two Numbers");
    scanf("%d%d", &a, &b);
    // printf("The Max Number is %d:", max(&a, &b));
    max(&a, &b);

    return 0;
}