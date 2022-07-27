#include <stdio.h>


int main()
{
    int x,n,m;
    printf("Enter two no. : \n");
    scanf("%d",&x);
    x++;
    printf("next prime no. is ");
     while(x)
     {
        for(n=2,m=1;m<=4;m++)
       {
           if(x/n==1) { if(x<11) printf("%d ",x); break;}
           if(x%n) n=2*m+1; else { m=1; break;}
       }
        if(m==4||m==5) {printf("%d ",x);break;}
        else x++;
     }



    return 0;
}
