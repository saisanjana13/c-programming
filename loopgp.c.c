//write a program in geometric progression//
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,x,sum=1;
	printf("enter n :");
	scanf("%d",&n);
	
	printf("enter x :");
	scanf("%d",&x);
	
	
	for(i=1;i<=n;i=i+1)
	{
	sum=sum+pow(x,i);
	}
	printf("%d",sum);
return 0;	
	
}
