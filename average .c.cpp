#include<stdio.h>
int main()
{
float a,b,c;
printf("enter a,b,c");
scanf("%f %f %f", &a,&b,&c);

float average = (a+b+c)/3;
printf("Average of a,b,c = %f",average);
return 0;
}
