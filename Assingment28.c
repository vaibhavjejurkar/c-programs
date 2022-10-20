#include<stdio.h>
int main()
{
    int m;
    printf("Enter the number:");
    scanf("%d",&m);
    if(m&1==1)
    {
        printf("Number is odd");
    }
    else
    {
        printf("Number is even");
    }  
    return 0;  
}