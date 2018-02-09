#include<stdio.h>
int main()
{
int a,i,count=0;
scanf("%d",&a);
for(i=2;i<n;i++)
{
 if(a%i==0)
 {
 count++;
 break;
 }
}
if(count==0)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
