/*
Trigonometric ratios for an angle in radians
*/
#include<stdio.h>
#include<math.h>
int main()
{
float ang,sine,cosine,tangent,cotangent,secant,cosecant;
printf("Enter angle in radians");
scanf("%f",&ang);
sine=sin(ang);
cosine=cos(ang);
tangent=tan(ang);
cotangent=1/tangent;
secant=1/cosine;
cosecant=1/sine;
printf("The trigonometric ratios of the angle:\nsine:%f\ncosine:%f\ntangent:%f\ncotangent=%f\nsecant=%f\ncosecant:%f",sine,cosine,tangent,cotangent,secant,cosecant);
return 0;
}