#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter the year");
scanf("%d",&n);
{
if(n%4==0)
{
if(n%100==0)
{
if(n%400==0)
{
printf("%d the year is leap year",n);
}
else
{
printf("%d not a leap year",n);
}
printf("%d is a leap year",n);
}
}
}
}
