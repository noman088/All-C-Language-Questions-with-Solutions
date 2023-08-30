// 5. Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.

// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("How many Email do you want to enter\n");
//     scanf("%d", &a);
//     char email[a][20];
//     fflush(stdin); // clear the buffer
//     printf("Enter List of email\n");
//     for (int i = 0; i < a; i++)
//         fgets(email[i], 20, stdin);
//     printf("Here is the Odd Email: \n");
//     for (int i = 0; i < a; i++)
//     {
//         int flag = 0;
//         for (int j = 0; email[i][j]; j++)
//             if (email[i][j] == '@')
//             {
//                 flag = 1;
//                 break;
//             }
//         if (flag == 0)
//             printf(" %s\n", email[i]);
//     }
//     return 0;
// }

#include <stdio.h>
#include<string.h>
int main()
{
    char a[2][20];
    printf("Enter 5 email\n");
    for (int i = 0; i < 5; i++)
    {
        gets(a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if(strchr(a[i],'@')!=0)
        {
            printf("%s\n", a[i]);
        }

    }
    
    return 0;
}
