#include<stdio.h>
int main()
{
	int a,b,add;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	add=a+b;
	if(add%2==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
