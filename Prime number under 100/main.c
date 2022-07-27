#include <stdio.h>


int main()
{
    int x,n,m;
    printf("Prime numbers under 100: \n");

    for(x=2;x<=100;x++)
    {
       for(n=2,m=1;m<=4;m++)
       {
           if(x/n==1) { if(x<11) printf("%d ",x); break;}
           if(x%n) n=2*m+1; else { m=1; break;}
       }
        if(m==4||m==5) printf("%d ",x);
    }


    return 0;
}
