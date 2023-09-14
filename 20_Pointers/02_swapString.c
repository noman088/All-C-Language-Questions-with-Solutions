// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
// #include <stdio.h>
// void swap(char *p, char *q)
// {
//     char temp[20];
//     strcpy(temp, p);
//     strcpy(p, q);
//     strcpy(q, temp);

// }
// int main()
// {

//     char str[20] = "noman";
//     char str2[20] = "kamran";
//     printf("%s and %s", str, str2);
//     swap(str, str2);
//     printf("\nafter swap : \n");
//     printf("%s and %s", str, str2);
//     return 0;
// }

// what sir teches us to do;
#include <stdio.h>
void swap(char **p, char **q)
{
    char *temp = *p;
    *p = *q;
    *q = *temp;
}
int main()
{
    char *a[20], *b[20];
    printf("Enter First String : ");
    gets(a);
    printf("Strings Before Swap :  %s and %s ", a, b);
    gets(b);
    swap(&a, &b);
    printf("Strings After Swap : %s and %s ", a, b);

    return 0;
}