#include<stdio.h>
void main()
{
    char a[50];
    int i;
    printf("Enter the string:");
    scanf("%s",&a);
    printf("\n odd:");
    for(i=0;a[i]!=0;i++)
{
   if(i%2 == 0)
{
    printf("%c",a[i]);
  }
    }
    printf("\n even:");
    for(i=0;a[i]!=0;i++)
    {
  if(i%2==1)
{
    printf("%c",a[i]);
}
    }
}
