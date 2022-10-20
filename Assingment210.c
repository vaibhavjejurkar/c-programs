#include<stdio.h>
int main()
{
    int a;  
    printf("Enter the number:");
    scanf("%d",&a);

    printf("number %d of last digit 0 as %d",a,a-a%10);
    
    return 0;
}