//c=a+b
void addition();
#include<stdio.h>
int main()
{
	addition();//main calls addition function
	return 0;
}
void addition()//functions definition
{
	int a=10,b=20;
	int c=a+b;
	printf("\nresult = %d",c);
}

