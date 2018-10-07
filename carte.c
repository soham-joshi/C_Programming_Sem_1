/*
program to convert Cartesian co-ordinates into polar co-ordinates
*/
#include<stdio.h>
#include<math.h>
int main()
{
float x,y,r,$;
printf("Enter Cartesian co-ordinates (x,y)");
scanf("(%f,%f)",&x,&y);
r=sqrt(x*x+y*y);
$=atan(y/x);
printf("The polar co ordinates (r,$) are (%f,%f)",r,$);
return 0;
}
