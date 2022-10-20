#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter the Number:");
    scanf("%d",&x);
    
    while(x!=0)
    {
      count++;
      if(x&1==1)
      {
        printf("%d",count);
        break;
      }
      x=x>>1;
    }
    return 0;
}