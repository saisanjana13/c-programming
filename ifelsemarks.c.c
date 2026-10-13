//check if a student is passed or failed in pps(passsing marks>=40)//
#include<stdio.h>
int main()
{
int marks;
printf("Enter Marks :");
scanf("%d",&marks);

if(marks>=40&&marks<=100)
{
printf("pass");
}
else
{
printf("fail");
}
return 0;
}
