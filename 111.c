#include<stdio.h>
int main()
{
     int n,c,k;
     scanf("%d %d",&n,&c);
     if(n>0&&n<32750)
     {
         k=n%10;
         n/=10;
         n*=10;
         k=k+c;
         k/=10;
         k*=10;
         printf("%d",n+c+k);
     }
     return 0;
}
