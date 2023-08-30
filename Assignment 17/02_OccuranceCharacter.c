#include <stdio.h>
int main()
{
    char a[10],a;
    printf("Enter a aing");
    gets(a);
    printf("Enter a Character");
    scanf("%c", &a);
    int count = 0;
    for (int i = 0; a[i]; i++)
    {
        if (a[i] == a)
            count++;
    }
    printf("%d times %c occur", count, a);
    return 0;
}