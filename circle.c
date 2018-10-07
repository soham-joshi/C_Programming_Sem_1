/*
center(x,y)
point(h,k)
*/
#include<stdio.h>
#include<math.h>
int main()
{
float x,y,h,k,r;
printf("Enter the co-ordinates of the center,the point and the radius respectively");
scanf("%f%f%f%f%f",&x,&y,&h,&k,&r);
if(sqrt(pow(2,x-h)+pow(2,y-k))==r)
{
printf("The point lies on the circle");
}
else
    if(pow(2,x-h)+pow(2,y-k)>pow(2,r))
    {
    printf("The point lies outside the circle");
    }
    else
    {
    printf("The point lies inside the circle");
    }
return 0;
}
   