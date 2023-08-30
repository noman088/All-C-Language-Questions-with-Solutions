// 10. Create an authentication system. It should be menu driven.
#include <stdio.h>
int main()
{
    char username[10], pass[10];
    // char username[] = "noman@123";
    // char pass[] = "70499";

    int flag = 0;
    char name[3][2][10] = {{"noman@123", "70499"}, {"kamran@123", "7970"}, {"zishan@123", "7599"}};
    // get username
    printf("Enter Username\n");
    gets(username);
    // get password
    printf("Enter password\n");
    gets(pass);
    for (int i = 0; i < 3; i++)
    {

        if (strcmp(username, name[i][0]) == 0 && strcmp(pass, name[i][1]) == 0)
        {
            printf("Login successfull");
            flag = 1;
        }
    }
    if (flag == 0)
        printf("username or password is incorrect");
    return 0;
}