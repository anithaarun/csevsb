#include<stdio.h>
int main()
{
  char s[200];
  int i,n;
  scanf("%s",&s);
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("%s",s[i]);
  }
  return 0;
}
