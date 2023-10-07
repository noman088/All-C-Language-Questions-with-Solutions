// 7. From the list of IP addresses, check whether all ip addresses are valid.
// #include <stdio.h>

#include <stdlib.h>
int main()
{

    char test[5];
    char IP[20];
    printf("Enter an IP Address\n");
    fgets(IP, 20, stdin);
    int i = 0, countDot = 0, flag = 0;
    while (IP[i])
    {
        int j = 0;
        while (IP[i] != '.')
        {
            if (IP[i] == '\0')
            {
                break;
            }
            test[j] = IP[i];
            j++;
            i++;
            if (IP[i] == '.')
                countDot++;
        }
        int checkNum = atoi(test);
        if (checkNum < 0 || checkNum > 255)
        {
            flag = 1;
            printf("Not  Valid IP Address\n");
            break;
        }

        if (countDot > 3)
        {
            flag = 1;

            printf("More Dot Not IP");
            break;
        }
        i++;
        printf("\n");
    }
    if (flag == 0)
        printf("Valid Ip Address...");
}

/// this is incompelete code ..

// #include <stdio.h>
// int main()
// {

//     char ip[] = "123.134.12.13";
//     char *a = strtok(ip, ".");
//     while (a != NULL)
//     {
//         int x = atoi(a);
//         if ((x > 0) && (x <= 255))
//             printf("%d", x);
//         a = strtok(NULL, ".");
//         /* code */
//     }

//     return 0;
// }