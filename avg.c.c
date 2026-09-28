#include<stdio.h>
int main()
{
	int a=10;
	int b=5;
	int c=7;
	float avg1 =a+b+c/3;
	printf("%f",avg1);
	
	float avg2 = (a+b+c)/3;
	printf("\n %f",avg2);
	
	float avg3 = (a+b+c)/3.0;
	printf("\n %f",avg3);
	return 0;

}
