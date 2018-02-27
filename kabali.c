#include<stdio.h>
int main()
{
int a,b,difference;
printf("enter the number of ninjas in kabali's team:");
scanf("%d",&a);
printf("enter number of ninjas in opponent team:");
scanf("%d",&b);
difference=a-b;
printf("difference is %d\n",difference);
if(a>b)
{
printf("kabali went to fight");
}
else
{
printf("kabali did not went to fight");
}
return 0;
}
