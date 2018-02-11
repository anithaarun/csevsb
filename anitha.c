#include<stdio.h>
void main()
{
    int speed;
    printf("enter the speed");
    scanf("%d",&speed);
    move(speed);
}
void move(int speed)
{
    printf("\n enter the moving of speed of %d",speed);
    printf("\n the obstacle is");
    printf("%d",&speed);
    switch(ch)
    {
        case 1:printf("\n the car stops");
               break;
        case 2:printf("\n the car moving slowly");
               break;
        case 3:printf("\n the car is moving");       
               break;    
}
}
