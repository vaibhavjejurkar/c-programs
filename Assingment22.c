#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Without last digit number %d is %d",a,a/10);

    return 0;
}