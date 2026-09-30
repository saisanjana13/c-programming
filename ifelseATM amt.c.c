//ATM Withdrawal//
#include<stdio.h>
int main()
{
int account_balance,withdrawal_amount;

printf("enter account_balance :");
scanf("%d",&account_balance);

printf("enter withdrawal_amount :");
scanf("%d",&withdrawal_amount);

if(withdrawal_amount<=account_balance)
{
printf("Transaction succesfull");
}
else
{
printf("Insufficient balance");
}
return 0;
}
