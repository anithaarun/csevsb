include <stdio.h>
int main(void) 
{
	char a[100];
	scanf("%s",&a);
	char k;
	int i,count=0,max=0,j;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			{
			count=count+1;
			}
		}
		if(count>max)
		{
			k=a[i];
			max=count;
		}
	}
	printf("%c",k);
	return 0;
}
