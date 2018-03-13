#include<stdio.h>
void main()
{
int n,product=1,a[40],i;
printf("\nEnter n value");
scanf("%d",&n);
printf("\nEnter %d numbers:",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    product=product*a[i];
}
printf("\nProduct:%d",product);
}
