/*
program to calculate Ramesh`s gross salary
*/
#include<stdio.h>
int main()
{
float bsalary,da,hra,gross_sal;
printf("Enter basic salary");
scanf("%f",&bsalary);
da=0.4*bsalary;
hra=0.2*bsalary;
gross_sal=(bsalary+da+hra);
printf("The gross salary of Ramesh is %f",gross_sal);
return 0;
}
