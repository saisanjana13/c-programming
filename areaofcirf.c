void area();
#include<stdio.h>
int main()
{
	area();
	return 0;
}
void area()
{
	int r;
	printf("enter radius:");
	scanf("%d",&r);
	printf("\n result = %f",3.14*r*r);
}
