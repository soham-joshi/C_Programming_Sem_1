#include<stdio.h>
float square(float);
int main()
{
   float a;
   printf("enter the value of a");
   scanf("%f",&a);
   printf("%f",square(a));
   return 0;
}
float square(float x)
{
   float s;
   s=x*x;
   return s;
}

    
