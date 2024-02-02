// 3. Write a function to display employee data. [ Refer structure from question 1 ]
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
    printf("Employee Id = %d\n", emp.id);
    printf("Employee Name = %s\n", emp.name);
    printf("Employee salary = %.2f\n", emp.salary);
}

int main()
{
    struct Employee e1;
    setData(&e1);
    DisplayData(e1);
}
