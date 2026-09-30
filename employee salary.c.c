/*Employee Salary A company wants to calculate an employee's gross salary.
Question: Read the employee's basic salary, HRA, and DA and calculate:
Gross Salary = Basic Salary + HRA + DA
Display all values clearly.*/

#include<stdio.h>
int main()
{
int basic_salary, HRA ,DA, gross_salary;
printf("enter basic_salary, HRA ,DA");
scanf("%d%d%d", &basic_salary, &HRA ,&DA);

gross_salary= basic_salary+HRA+DA;
printf("gross_salary= %d",gross_salary);
return 0;
}
