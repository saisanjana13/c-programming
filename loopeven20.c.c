//write a program to add all the even numbers from 20-30
#include<stdio.h>
int main()
{
int i,sum=0;
 
    for(i=20;i<=30;i=i+2)
    {
    	sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
