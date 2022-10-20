#include<stdio.h>
int main()
{
    int R;
    float A,pi=3.14;
    printf("Enter a radius:");
    scanf("%d",&R);
    A=pi*R*R;
    printf("Area of circle is %.2f having radius %d",A,R);

    return 0;
}