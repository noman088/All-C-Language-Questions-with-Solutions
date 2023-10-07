// 5. Write a program to convert a given aing into lowercase
#include <stdio.h>
int main()
{
    char a[20];
    printf("Enter a aing  ");
    gets(a);
    for (int i = 0; a[i]; i++)
    {
        a[i] = a[i] + 32;
        printf("%c", a[i]);
    }

    return 0;
}

            //  OR


// #include <stdio.h>
// int main()
// {
//     char a[20];
//     printf("Enter a aing  ");
//     gets(a);
//     for (int i = 0; a[i]; i++)
//     {
//         a[i] = a[i] + 32;
//     }
//     printf("your aing in upper is like : %s", a);

//     return 0;
// }
