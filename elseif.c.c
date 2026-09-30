//Student Grade Calculation//
#include<stdio.h>
int main()
{
int marks;
printf("enter marks :");
scanf("%d",&marks);

if(marks>=90&&marks<=100 )
{
printf("A Grade");
}
else if(marks>=80&&marks<=89)
{
printf("B Grade");
}
else if(marks>=70&&marks<=79)
{
printf("C Grade");
}
else if(marks>=60&&marks<=69)
{
printf("D Grade");
}
else if(marks>=40&&marks<=59)
{
printf("E Grade");
}
else if(marks<40)
{
printf("fail");
}
return 0;
}
