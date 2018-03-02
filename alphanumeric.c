#include<stdio.h>
void main()
{
    char string[30];
    int i;
    printf("enter string:");
    scanf("%s",&string);
    for(i=0;string[i]!=0;i++)
    {
    if(string[i]>=48 && string[i]<=57)
    {
  printf("%c",string[i]);
   }
    }
}
