// 4. Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]
// 2. Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee setData(struct Employee *emp)
{
    printf("Enter Employee Id\n");
    scanf("%d", &emp->id);
    fflush(stdin); // we need to empty the buffer before storing string
    printf("Enter Emplyee Name\n");
    fgets(emp->name, sizeof(emp->name), stdin);
    printf("Enter Salary\n");
    scanf("%f", &emp->salary);
}

void DisplayData(struct Employee emp)
{
    printf("\n\nEmployee Id = %d\n", emp.id);
    printf("Employee Name = %s", emp.name);
    printf("Employee salary = %.2f\n\n", emp.salary);
}

int main()
{
    int n;
    printf("How many employee: ");
    scanf("%d", &n);
    struct Employee a[n];
    char str[20];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        setData(&a[i]);
        if (a[i].salary > max)
            max = a[i].salary;
        strcpy(str, a[i].name);
    }

    for (int i = 0; i < n; i++)
        DisplayData(a[i]);

    printf("\n%s has Highest salary", str);
}
