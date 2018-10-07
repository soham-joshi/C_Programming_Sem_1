/*
program for arithmetic calculations of two numbers
*/
#include<stdio.h>
int main()
{
int no1,no2,sum,sub,mult,div;
printf("Enter two numbers");
scanf("%d%d",&no1,&no2);
sum=no1+no2;
sub=no1-no2;
mult=no1*no2;
div=no1/no2;
printf("Addition:%d\nSubtraction:%d\nMultiplication;%d\nDivision:%d",sum,sub,mult,div);
return 0;
}
