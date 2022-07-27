#include <stdio.h>
int main()
{
    int a,b,c,d,s;
     printf("Enter two number : ");

    scanf("%d%d",&a,&b); s=a;
    a=a>b?a:b; b=b<s?b:s; // Checking a is greater or not

       while(1)
       {
         c=a%b;
        if(c==0) { printf("HCF is %d",b); break; }
        else
        {
          d=b%c;
          if(d==0) { printf("HCF is %d",c); break; }
          a=c; b=d;
        }
       }
      return 0;
}



