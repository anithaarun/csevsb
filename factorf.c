#include<stdio.h>
void main()
{
int a,i;
printf("\n Enter a number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
printf("%d",i);
}
}
}
