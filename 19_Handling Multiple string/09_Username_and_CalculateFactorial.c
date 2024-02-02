// 9. Write a program that asks the user to enter a username. If the username entered is
// one of the names in the list then the user is allowed to calculate the factorial of a
// number. Otherwise, an error message is displayed
#include <stdio.h>
int main()
{

    char name[20];
    char list[4][10] = {"noman", "kamran", "zishan", "gulfam"};
    printf("Enter your Name");
    scanf("%s", &name);
    fflush(stdin);

    for (int i = 0; i < 4;i++)
    {
        int s = strcmp(name, list[i]);
        if(s==0)
        {
            int n;
            printf("enter a number to calculate factorial\n");
            scanf("%d", &n);
            int fact = 1;
            for (int i = n; i > 0;i--)
            {
                fact = fact * i;
            }
            printf("Factorial of %d is %d", n, fact);
        }
    }
        return 0;
}