#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers to swap:");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c; 
    printf("Numbers after swapping a=%d b=%d",a,b);

    return 0;
}