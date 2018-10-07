/*
to verify wjethe the given three points lie on a straight line
*/
#include<stdio.h>
int main()
{
float x1,x2,x3,y1,y2,y3;
printf("Enter the co-ordinates (x,y) respectively");
scanf("%f%f%f%f%f%f)",&x1,&y1,&x2,&y2,&x3,&y3);
if((x1-x2)/(y1-y2)==(x2-x3)/(y2-y3))
{
printf("The points lie on a line");
}
else
{
printf("The points don't lie on a line");
}
return 0;
}
