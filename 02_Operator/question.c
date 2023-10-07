// write a program to check whether a number is odd or even without using % operator

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number to check \n");
//     scanf("%d", &n);
//     if ((n/2)*2 == n)// this will4 work
//         printf("even");
//     else
//         printf("odd");
//         // this isn't working let's try another way

//     return 0;
// }

// Write a program to check whether a number is odd or even without  % and / operator

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to check");
    scanf("%d", &n);
    if (n & 1 == 1) // 2- binary 10  ...10&1==0 that means even and binary of 3 is 11 and 11&1 == 1 which means odd
        printf("odd");
    else
        printf("Even");
    return 0;
}