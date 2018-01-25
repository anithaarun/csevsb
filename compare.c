#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[20];
int i,j;
printf("enter the first string");
scanf("%d",&a);
printf("enter the second string");
scanf("%d",&b);
if(strlen(a)>strlen(b))
{
printf("the string a is larger");
}
else
{
printf("the string b is larger");
}
}
