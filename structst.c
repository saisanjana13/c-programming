//write a program to read and print student details using array and structure//
#include<stdio.h>  
struct student 
{
	char name[20];
	int age, rn;
	char gender;
	float cgpa;
};
int main()
{
struct student s[5];
int i;
for(i=0;i<5;i++)
{
	printf("student %d details:\n ",i+1);
	printf("enter student name:");
	scanf("%s",s[i].name);
	printf("enter age:");
	scanf("%d",&s[1].age);
	printf("enter roll number:");
	scanf("%d",&s[i].rn);
	printf("enter cgpa:");
	scanf("%f",&s[i].cgpa);
	printf("*************************\n");
}
return 0;
}

