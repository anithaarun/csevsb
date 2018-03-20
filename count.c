#include<stdio.h>
void main()
{
int n,digit=0;
printf("enter the numbers:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
digit++;
}
printf("digit=%d",digit);
}
