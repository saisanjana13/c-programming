//with return type,with parameter
int addition(int a,int b);
#include<stdio.h>
int main()
{
	int a =11,b=11;
	addition(a,b);
	return 0;
}
int addition(int a,int b)
{
	printf("addition result :%d",a+b);
}
