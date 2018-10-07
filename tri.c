/*
Triangle verification
*/
#include<stdio.h>
int main()
{
float a1,a2,a3;
printf("Enter the three angles");
scanf("%f%f%f",&a1,&a2,&a3);
if(a1+a2+a3==180)
{
printf("The triangle is valid");
}
else 
{
printf("The triangle is invalid");
}
return 0;
}