#include <stdio.h>


int main()
{
    int x,y,a,sum;
    printf("Enter the number: ");
    scanf("%d",&x); y=x;
    for(sum=0;x>0;x=x/10)
    {
       a=x%10;
       sum=sum+a*a*a;

    }
    if(sum==y) printf("%d is Armstrong number",y);
    else printf("%d is not Armstrong number",y);
    return 0;
}


