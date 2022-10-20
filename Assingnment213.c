#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter the number:");
    scanf("%d",&a);
    c=a%10*100+a/10;
    printf("After rotate number is %d ",c);

    return 0;
}