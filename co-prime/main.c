#include <stdio.h>


int main()
{
    int a,b,h;
    printf("Enter the Number: ");
    scanf("%d%d",&a,&b);
    for(h=a<b?a:b;h>=1;h--)
       {
           if(a%h==0&&b%h==0) break;
       }
        if(h==1) printf("\n Co-prime");
        else printf("\n Not Co-prime");
     return 0;
}
