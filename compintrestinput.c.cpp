#include<stdio.h>
#include<math.h>
int main()
//calculation of compound intrest using scanf//
{
int p,r;
float t,n;
printf("enter p");
scanf("%d", &p);

printf("enter r");
scanf("%d", &r);

printf("enter t");
scanf("%f", &t);

printf("enter n");
scanf("%f", &n);

float TA= p*(pow(1+r/(100*n),n*t));
printf("total amount after compound intrest=%f",TA);
float CI = TA-p;
printf("\n compund interest= %f", CI);
return 0;
}

