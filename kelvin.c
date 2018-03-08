#include<stdio.h>
int main()
{
    float celcius,kelvin;
    printf("enter the temperature in celcius:");
    scanf("%f",&kelvin);
    kelvin=celcius+273.15;
    {
        printf("temperature in kelvin is%f",kelvin);
    }
    return 0;
}
