// //1. Write a program to print unit digit of a given number

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int Num;
//     printf("Enter a Number ");
//     scanf("%d", &Num);
//     Num = Num % 10;
//     printf("The Unit Number of A given Number is %d", Num);
// }

// //2. Write a program to print a given number without its last digit.

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int num;
//     printf("Ente a Number ");
//     scanf("%d", &num);
//     num = num / 10;
//     printf("Number is without last digit is %d", num);
//     return 0;
// }

// //3. Write a program to swap values of two int variable
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int a, b, c;

//     printf("Enter first Number  ");
//     scanf("%d", &a);
//     printf("Enter second Number ");
//     scanf("%d", &b);
//     c = a;
//     a = b;
//     b = c;
//     printf("Values after swap is %d and %d", a, b);

//     return 0;
// }

// // 4. Write a program to swap values of two int variables without using a third variable.
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int a, b;
//     printf("Enter Two values for swap\n");
//     scanf("%d%d", &a, &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("%d\n%d", a, b);

//     return 0;
// }

// //5. Write a program to input a three-digit number and display the sum of the digits.

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int r, num, i = 0, sum = 0;
//     printf("Enter 3 digit Number ");
//     scanf("%d", &num);
//     while (num != 0)
//     {
//         r = num % 10;
//         sum = sum + r;
//         num = num / 10;
//     }
//     printf("The sum of digit are %d", sum);

//     return 0;
// }

// //6. Write a program which takes a character as an input and displays its ASCII code.

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// char A;
// printf("Enter a Character ");
// scanf("%c",&A);

// printf("The ASCII Value of this character is %d", A);

// return 0 ;
// }

// //7. Write a program to find the position of first 1 in LSB.
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int a = 4, count = 0;
//     while (a != 0)
//     {
//         if (a & 1 == 1)
//         {
//             printf("LSB at %d Position", count);
//             break;
//         }
//         else
//         {
//             a = a >> 1;
//             count++;
//         }
//     }
//     return 0;
// }

// //8. Write a program to check whether the given number is even or odd using a bitwise
// operator.

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int num;
//     printf("Enter a number to check ");
//     scanf("%d", &num);
//     if (num & 1 == 0)
//         printf("%d is even", num);
//     else
//         printf("%d is odd", num);

//     return 0;
// }

// //9. Write a program to print size of an int, a float, a char and a double type variable
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int e;
//     int a = sizeof(e);
//     printf("size of int is %d\n ", a);

//     float f;
//     int x = sizeof(f);
//     printf("size of float is %d\n ", x);

//     char g;
//     int b = sizeof(g);
//     printf("The size of char is %d\n ", b);

//     double h;
//     int c = sizeof(h);
//     printf("The size of double is %d\n ", c);

//     return 0;
// }

// //10. Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int x, num;
//     printf("Enter a Number x= ");
//     scanf("%d", &num);
//     x = num / 10;
//     x = x * 10;
//     printf("x=%d", x);
//     return 0;
// }

// //11. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int x, num, digit;
//     printf("Enter a Number \n");
//     scanf("%d", &num);
//     printf("Enter the digit");
//     scanf("%d", &digit);
//     x = num * 10;
//     x = x + digit;
//     printf("The Number will be %d", x);
//     return 0;
// }

// // 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     float inr, usd;
//     printf("Enter Indian rupees\n");
//     scanf("%f", &inr);

//     usd = inr / 76.23;
//     printf("%.2f indian rupees is in us dollar is %.2f", inr, usd);

//     return 0;
// }