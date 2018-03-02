#include <stdio.h>
void main() 
{
	int a[50],v=0,j,n;
	printf("enter n value:");
  scanf("%d",&n);
	for(j=0;j<n;j++)
	{
	    scanf("%d",&a[j]);
	}
	for(j=0;j<n;j++)
	{
	v=v+a[j];
	}
	printf(" the sum of n number is %d",v);
}
