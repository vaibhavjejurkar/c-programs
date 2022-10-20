#include<stdio.h>
int LCM(int,int);
int main()
{
    int a,b,d;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    d=LCM(a,b);
    printf("Lcm of two number is %d",d);

    return 0;
}
int LCM(int a,int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
           break;
        }
    }
    return i;
}