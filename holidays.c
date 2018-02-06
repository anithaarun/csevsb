#include<stdio.h>
int main()
{
char a[100];
printf("enter the day");
scanf("%s",&a);
if(a=='saturday'||a=='sunday')
{
printf("\n holiday");
}
else
{
printf("\n no holiday");
}
return 0;
}
