#include<stdio.h>
int main()
{
    int num1,num2,power;
    printf("\n Enter the number1");
    scanf("%d",&num1);
    printf("\n Enter the number2");
    scanf("%d",&num2);
    power=pow(num1,num2);
    printf("\n The power of number is %d",power);
    return 0;
}
