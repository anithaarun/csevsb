#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,j,l,count=0;
	printf("\nEnter the String:");
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	for(j=i+1;j<=l;j++)
	{
	if(a[i]==a[j])
	{
	count++;
	}
	}
	}
	if(count==0)
	{
	printf("\ngiven string is isogram");
	}
	else
	{
		printf("\ngiven string is not a isogram");
	}
	return 0;
}
