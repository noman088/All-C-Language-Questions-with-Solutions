// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <stdio.h>
void sort(int *p, int size)
{
    int j = 4;
    for (int i = 0; i < size / 2; i++, j--)
    {
        if (p[i] > p[j])
        {
            int temp = p[i];
            p[i] = p[j];
            p[j] = temp;
        }
    }
}

int main()
{

    int a[5] = {5, 4, 3, 2, 1};
    printf("Array Before sorting : \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    sort(a, 5);
    printf("\nArray After sorting : \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}