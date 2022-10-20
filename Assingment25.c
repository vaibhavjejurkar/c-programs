#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,sum;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    d=b/10;
    e=b%10;
    f=d/10;
    g=d%10;
    sum=c+e+f+g;
    printf("addition of four digit number is %d",sum);

    return 0;


}