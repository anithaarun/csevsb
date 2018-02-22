#include<stdio.h>
#include<math.h>
int main()
{
int n,s;
printf("Enter a number");
scanf("%d",&n);
s=sqrt(n);
if(s==(n*n))
{
printf("Yes");
}
else
{
printf("No");
}
return 0;
}
