// 4. WAP to find the area of the circle.Take radius of circle from user as input and print the
//result in below given format.Expected output format – “Area of circle is A having the radius R”.Replace A with area
//&R with radius.

#include<stdio.h>
int main()
{
    int R;
    float A;

    printf("Enter Radius of Circle : ");
    scanf("%d", &R);
    // formula = pi * r ^ 2;
    A = 3.14 * R * R;
    printf("Area Of Circle is %.2f", A);

    return 0;
}