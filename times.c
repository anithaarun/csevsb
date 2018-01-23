#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[50];
gets(s);
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("%s\n",s);
}
return 0
}
