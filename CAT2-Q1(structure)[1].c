//A C program to define a structure named employee
#include<stdio.h>
#include<string.h>

struct Employee {
char name [25];
int id;
char department[20];
float salary;
char email [50];
}; employee1;

int main (){
struct Employee employee1;
strcpy(employee1.name, "John Dee");
employee1.id=12345;
strcpy(employee1.department, "Human Resources");
employee1.salary=55000.50;
strcpy(employee1.email, "John.dee@company.com");

printf("Name: %s\n", employee1.name);
printf("Id: %d\n", employee1.id);
printf("Department: %s\n", employee1.department);
printf("Salary: %.2f\n", employee1.salary);
printf("Email: %s\n", employee1.email);

return 0;
}