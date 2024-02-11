// 6. Write a function to sort employees according to their names [refer structure from
// question 1]
#include <stdio.h>
struct Emp
{
        int id;
        char name[20];
        float salary;
};
struct Emp SetData(struct Emp *employee)
{
        printf("Enter Id : \n");
        scanf("%d", &employee->id);
        fflush(stdin);
        printf("Enter Employee Name : ");
        fgets(employee->name, sizeof(employee->name), stdin);
        
        
}

int main()
{
        struct Emp mister, noman, aarif;

        return 0;
}