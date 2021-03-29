#include<stdio.h>
int main()
{
     int n,c,k,j,i=1;
     scanf("%d %d",&n,&c);
     if((n>0&&n<32750)&&c>0)
     {
         for(j=c;j>0;j/=10)
            i*=10;
         k=n%i;
         n/=i;
         n*=i;
         k=k+c;
         k/=i;
         k*=i;
         printf("%d",n+c+k);
     }
     return 0;
}
