//If it is $5,000 or above, display "10% Discount"; otherwise display "No Discount".//
#include<stdio.h>
int main()
{
int amount;

printf("enter amount :");
scanf("%d",&amount);
float discount = 5000;
float price= (amount*discount)/100.0;

if(amount>=5000)
{
printf("After %10 Discount :%f\n",price);
}
else
{
printf("no discount");
}
return 0;
}
