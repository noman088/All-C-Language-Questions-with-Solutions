/*
10. WAP to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)

*/

#include <stdio.h>
int main()
{
    // make variable for store
    int d, m, y;
    printf("Please Enter a Date : ");                // massage for user
    scanf("%d/%d/%d", &d, &m, &y);                   // take input from user
    printf("You've Enter : %d - %d - %d ", d, m, y); // Print the value as mention in Problem
    // Now let's check
    //thank you ....c
    return 0;
}