#include<stdio.h>
#include<conio.h>
int main()
{
int a[10]=20,b[20]=40;
printf("enter the array of values");
scanf("%d%d",&a,&b);
if(a[10]<b[20])
{
printf("array b is largest and a is lowest");
}
else
{
printf("array a is largest and b is lowest");
}
}
