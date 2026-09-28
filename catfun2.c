//program for second catagory; no returntype, with parameter -
void addition(int a,int b);//function decalaration
#include<stdio.h>
int main()
{
	int a=5,b=7;
	addition(a,b);//function call
	addition(12,77);//call by value technique
	return 0;
}
void addition(int a,int b)
{
	printf("\nAddition result =%d",a+b);
}

