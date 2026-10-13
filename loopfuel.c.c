//weekly fuel consumption//
#include<stdio.h>
int main()
{
	int i,fuel,days;
	float average,total=0;
	printf("no of days :");
	scanf("%d",&days);
	
	for(i=1;i<=7;i++)
	{
		printf("enter fuel consumed in a day:");
		scanf("%d",&fuel);
		total=total+fuel;
	}
	
	average=total/days;
	printf("weekly total fuel used :%f\n",total);
	printf("enter average:%f",average);
	return 0;
}

