/*
profit or loss	`
*/
#include<stdio.h>
int main()
{
float cp,sp,pro,los;
printf("Enter the cp and sp respectively");
scanf("%f%f",&cp,&sp);
if(sp>cp)
{
printf("The seller has made profit");
pro=sp-cp;
printf("\nThe profit is %f",pro);
}
else
{
printf("The seller has incurred a loss");
los=cp-sp;
printf("\nThe loss is %f",los);
}
return 0;
}