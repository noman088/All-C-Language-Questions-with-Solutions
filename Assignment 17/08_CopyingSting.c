// 8. Write a program in C to copy one aing to another aing.
#include <stdio.h>
int main()
{
    char a[100], copy[100];
    printf("Enter  aing\n");
    fgets(a, 100, stdin);

    for (int i = 0; a[i]; i++)
    {
        copy[i] = a[i];
    }
    printf("copy aing  after copying : %s", copy);

    return 0;
}
