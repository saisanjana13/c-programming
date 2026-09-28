//Read the total available data and used data in GB. Display: Available data ,Used data ,Remaining data //
#include<stdio.h>
int main()
{
int available_data,used_data;
printf("enter Available data :");
scanf("%d",&available_data);

printf("enter used_data :");
scanf("%d",&used_data);

int remaining_data= available_data-used_data;
printf("Remaining data =%d",remaining_data);
return 0;
}

