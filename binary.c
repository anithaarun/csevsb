#include<stdio.h>
int main()
{
	char b[2000];
	int i,count=0;
	printf("enter the string\n");
	scanf("%[^\n]s",&b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count+1);

	return 0;
}
