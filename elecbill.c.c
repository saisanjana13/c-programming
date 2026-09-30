/*Write a C program to read the customer name, customer ID, and number of units consumed and
 display them as a simple electricity bill.*/
#include<stdio.h>
int main()
{
char name;
int ID,number_of_units,cost_per_unit;
printf("enter name :");
scanf("%s",&name);

printf("enter ID :");
scanf("%d",&ID);

printf("enter number_of_units :");
scanf("%d",&number_of_units);

printf("enter cost_per_unit :");
scanf("%d",&cost_per_unit );

int bill_amount= (number_of_units*cost_per_unit);
printf("Bill amount =%d",bill_amount);
return 0;


}
