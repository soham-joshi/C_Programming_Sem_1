/*
program to convert distance in km to dist in metres,feet,inches,centimetres
*/
#include<stdio.h>
int main()
{
float km,m,f,in,cm ;
printf("Enter the distance in kilometres");
scanf("%f",&km);
m=km*1000;
f=km*3280.84;
in=km*39370.07;
cm=km*100000;
printf("The distance between cities in \nmetres:%f\nfeet:%f\ninches:%f\ncentimetres:%f",m,f,in,cm);
return 0;
}