#include<stdio.h>
int main()
{
    int x,y,a,sum=0;
    for(y=1;y<=1000;y++)
    {
        x=y;sum=0;
        while(x>0)
        {
            a=x%10;
            sum=sum+a*a*a;
            x=x/10;
        }
         if(sum==y) printf("%d ",y);

    }
    return 0;
}















