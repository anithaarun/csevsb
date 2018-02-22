#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%13==0)
    {
        printf("it is a multiples of 13");
    }
    else
    {
        printf("it is not multiples of 13");
    }
}
