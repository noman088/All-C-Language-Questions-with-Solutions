// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
// the user.

#include <stdio.h>
#include <string.h>
int main()
{
    // char name[10][20]={"bhopal","indore","patna","siwan","gopalganj","saran","gwalior","jhansi","gaya","mumbai"};
    char name[10][20];
    printf("Enter 10 city names : \n");
    for (int i = 0; i < 10; i++)
    {
        gets(name[i]);
    }
    char temp[20];
    int i = 0, j = 0, k = 0;
    for (int i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            int d = strcmp(name[i], name[j]);
            if (d == 1)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("\n");
    printf("\nHere the names after sorting: \n");
    for (int i = 0; i < 10; i++)
        printf("%s\n", name[i]);

    return 0;
}