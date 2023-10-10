// 5. Write a function to sort employees according to their salaries [ refer structure from
// question 1]
#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};

void setData(struct Employee *emp)
{
    printf("Enter id : ");
    scanf("%d", &emp->id);
    fflush(stdin);
    printf("Enter name: ");
    fgets(emp->name, sizeof(emp->name), stdin);
    printf("Enter Salary : ");
    scanf("%f", emp->salary);
}
void showData(struct Employee emp)
{
    printf("id = %d\n", emp.id);
    printf("id = %s\n", emp.name);
    printf("id = %.2f\n", emp.salary);
}
int main()
{
    struct Employee a[10];
    
    
    return 0;
}