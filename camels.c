#include<stdio.h>
#include<string.h>
void main()
{
	char s[200];
	int l,i;
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
	    if(i==0)
	    {
	    s[0]=topper(s[0]);
	    }
	    if(s[i]==' ')
	    {
	    s[i+1]=topper(s[i+1]);
	    }
	    
	}
	printf("%s",s);
		
}
