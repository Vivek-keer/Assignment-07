 #include <stdio.h>
int main()
{
    int a=0,b=1,c=1,d=2,i,n=3;
     printf("Enter the  number\n ");

    scanf("%d",&i);
       while(c<=i&&d<=i)
       {
        c=a+b;
        d=b+c;
        a=c; b=d;
       if(i==c) { printf("EXIST"); break; }
       if(i==d) { printf("EXIST"); break; }
       }
       if(i!=c&&i!=d) printf(" NOT EXISTs ");
      return 0;
}



