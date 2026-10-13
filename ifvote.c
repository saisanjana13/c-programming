//vote eligibility//
#include<stdio.h>
int main()
{
char name[8];
int age;

printf("enter name :");
scanf("%s",name);

printf("enter age :");
scanf("%d",&age);

if(age>=18)
{
printf("You are eligible");
}
else
{
printf("You are not eligible");
}
return 0;
}

