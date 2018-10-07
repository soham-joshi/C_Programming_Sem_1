/*
program for arithmetic calculations of two numbers
*/
#include<stdio.h>
int main()
{
float no1,no2,sum,sub,mult,div;
printf("Enter two numbers");
scanf("%f%f",&no1,&no2);
sum=no1+no2;
sub=no1-no2;
mult=no1*no2;
div=no1/no2;
printf("Addition:%.2f\nSubtraction:%.2f\nMultiplication;%.2f\nDivision:%.2f",sum,sub,mult,div);
return 0;
}
