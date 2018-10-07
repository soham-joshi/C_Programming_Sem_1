/*
pt(x,y) on origin,x-axis,y-axis 
*/
#include<stdio.h>
int main()
{
float x,y;
printf("Enter the coordinates of pt");
scanf("%f%f",&x,&y);
if(x==0 && y==0)
{
printf("The point lies on the origin");
}
else 
    if(x!=0 && y==0)
    {
    printf("The point lies on x axis");
    }
    else 
        if(x==0 && y!=0)
        {
        printf("The point lies on y axis");
        }
        else
        {
        printf("The point does not lie on x axos ,y axis or the origin");
        }
return 0;
}

