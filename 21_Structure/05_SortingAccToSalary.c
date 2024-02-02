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
    scanf("%f", &emp->salary);
    printf("\n");
}
void showData(struct Employee emp)
{
    printf("\n");
    printf("id = %d\n", emp.id);
    printf("name = %s", emp.name);
    printf("salary = %.2f\n\n", emp.salary);
}
int main()
{
    int n;
    printf("How many employees are there : ");
    scanf("%d", &n);
    struct Employee a[n];
    for (int i = 0; i < n; i++)
    {
        setData(&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        showData(a[i]);
    }
    

    return 0;
}