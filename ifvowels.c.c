//write a program to check a given char is vowel or a consonant//
#include<stdio.h>
int main()
{
char ch;
printf("enter ch :");
scanf("%c",&ch);

if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
	printf("vowels");
}
else
{
printf("consonant");	
}
   return 0;
}
