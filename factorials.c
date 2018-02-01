#include<stdio.h>
int main()
{
int f=1,n,i;
printf("enter no ");
scanf("%d ",&n);
for(i=2;i<=n;i++)
{
f=f*i;
}
printf("%d",f);
getch();
}
