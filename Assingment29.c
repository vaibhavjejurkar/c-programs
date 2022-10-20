#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=sizeof(int);
    b=sizeof(float);
    c=sizeof(char);
    d=sizeof(double);
    printf("size is %d\n",a);
    printf("size is %d\n",b);
    printf("size is %d\n",c);
    printf("size is %d\n",d);
    printf("\n");

    return 0;
}