/*
To find whether area > perimeter
*/
#include<stdio.h>
int main()
{
float l,b,a,p;
printf("Enter the length and breadth respectively");
scanf("%f%f",&l,&b);
a=l*b;
p=2*(l+b);
if(a>p)
{
printf("The area of rectangle is greater than the perimeter");
}
else
{
printf("The area of rectangle is not greater than its perimeter");
}
return 0;
} 