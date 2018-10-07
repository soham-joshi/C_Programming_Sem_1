/* 
program to find area of triangle if all sides are known
*/
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,area;
printf("Enter three sides of triangle");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of the triangle is %f",area);
return 0;
}
   