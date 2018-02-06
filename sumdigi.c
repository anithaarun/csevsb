int main()
{
    int a,sum=0,d;
    scanf("%d",&a);
    while(a!=0)
    {
        d=a%10;
        sum=sum+d;
        a=a/10;
    }
    printf("%d",sum);
    return 0;
}
