// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
void swap(char *p, char *q)
{
    char temp[20];
    strcpy(temp, p);
    strcpy(p, q);
    strcpy(q, temp);
    
}
int main()
{

    char str[20] = "noman";
    char str2[20] = "kamran";
    printf("%s and %s", str, str2);
    swap(str, str2);
    printf("\nafter swap : \n");
    printf("%s and %s", str, str2);
    return 0;
}
