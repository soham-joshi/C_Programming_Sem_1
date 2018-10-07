/* 
program to calculate the average of three numbers
*/
#include<stdio.h>
int main()
{
int n1,n2,n3,avg;
printf("Enter any three numbers");
scanf("%d%d%d",&n1,&n2,&n3);
avg=(n1+n2+n3)/3;
printf("The average of three numbers is %d",avg);
return 0;
}
