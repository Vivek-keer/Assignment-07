#include <stdio.h>
int main()
{
    int a=0,b=1,c=1,d,i,n;
    printf("Enter the Number\n");

    scanf("%d",&i);
    printf("%d term of fibonacci series are \n ",i);
        printf("%d ",a);
        printf("%d ",b);
       for(n=3;n<=i;n++)
       {
       c=a+b;  printf("%d ",c);
       d=b+c;  printf("%d ",d);
       a=c; b=d;
       n++;
       }

    return 0;
}
