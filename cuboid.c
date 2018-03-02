#include <stdio.h>
void main()
{
    int l,b,h,volume,surface;
    printf("enter the length\n");
    scanf("%d",&l);
    printf("enter the breadth\n");
    scanf("%d",&b);
    printf("enter the height\n");
    scanf("%d",&h);
    volume=l*b*h;
    surface=(2*l*b)+(2*l*h)+(2*b*h);
    printf("\nthe volume is:%d",volume);
    printf("\nthe surface is:%d",surface);
    
}
