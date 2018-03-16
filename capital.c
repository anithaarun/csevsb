#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
int i=0;
printf("\nEnter string:");
gets(str);
str[0]=str[0]-32;
while(str[i]!='\0')
{
if(str[i]==' ')
{
str[i+1]=str[i+1]-32;
}
i++;
}
printf("\nFinal string: %s",str);
return 0;
}
