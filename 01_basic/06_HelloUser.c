// 6. WAP to print the name of the user in double quotes.
// Expected output format – “Hello, Amit Kumar”
#include <stdio.h>
int main()
{
    char name[50];
    printf("Please Enter your Name Here : ");
    gets(name);
    // \"-- Print Qoute in qoute 
    printf("\"Hello , %s\"", name);

    return 0;
}