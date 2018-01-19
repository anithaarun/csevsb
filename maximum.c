#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
a=2;
b=3;
c=4;
printf("compare the string a,b,c");
if(a<b)
{
printf("b is larger");
scanf("%d",&b);
}
if(b<c)
{
printf("c is larger");
scanf("%d",&c);
}
printf("the value c is maximum");
}
