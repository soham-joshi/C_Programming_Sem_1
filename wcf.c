/*
Wind chill factor calculation using air temperature and wind velocity
*/
#include<stdio.h>
#include<math.h>
int main()
{
float e,t,v,wcf;
printf("Enter temperature t and wind velocity v respectively");
scanf ("%f%f",&t,&v);
e=pow(0.16,v);
wcf=35.74+0.6215*t+(0.4275*t-35.75)*e;
printf("The wind chill factor wcf is %f",wcf);
return 0;
}00