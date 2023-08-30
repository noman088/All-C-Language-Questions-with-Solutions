// 9. Write a function to reverse a sing word wise. (For example if the given sing is
// “Mysirg Education Services” then the resulting sing should be “Services Education
// Mysirg” )
#include <stdio.h>

void swap(char a[], int i, int j)
{
    char temp;
    while (i <= j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    char a[30] = "Mysirg  Education Services";
    int i = 0, start = 0, end = 0, flag = 0;
    while (a[i] != '\0')
    {
        while (a[i] != ' ')
        {
            if (a[i] == '\0')
            {
                flag = 1;
                break;
            }
            end++;
            i++;
        }
        swap(a, start, end - 1);
        if (flag == 1)
            break;
        start = end++;
        i++;
    }
    swap(a, 0, i - 1);
    printf("%s", a);
    return 0;
}