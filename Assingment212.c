#include<stdio.h>
int main()
{
    
    float a,b;
    printf("Enter the amount:");
    scanf("%f",&a);
    b=a/76.23;
    printf("INR is %.2f after converted into USD %.2f",a,b);

    return 0;
}