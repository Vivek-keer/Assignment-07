#include <stdio.h>
int main()
{
    int a=0,b=1,c=1,d,i,n;
    printf("Enter the Number\n");

    scanf("%d",&i);
    printf("%dth term of fibonacci series is ",i);
  if(i<=2)
    {
        if(i%2) printf("%d",a);
        else    printf("%d",b);
    }
  else
     {
       for(n=3;n<=i;n++)
       {
       c=a+b;
       d=b+c;
       a=c; b=d;
       n++;
       }
     }

     if(i%2) printf("%d",c);
     else    printf("%d",d);
    return 0;
}
