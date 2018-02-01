#include<stdio.h>
void main()
{
	int n,a[10],avg,sum,i;
	printf("\nEnter the number ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("\nAverage is %d",avg);
}
