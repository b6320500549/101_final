#include<stdio.h>
int main()
{
  int n,i,j,k,l=1,g=0,ma;
  scanf("%d",&n);
  int m[n],max[n];
  for(i=0;i<n;i++)
    scanf(" %d",&m[i]);
  for(i=0;i<n;i++)
  {
      k=0;
      for(j=0;j<n;j++)
      {
          if(m[i]==m[j])
          {
              k++;
          }
      }
      if(k>=l)
      {
        l=k;
        max[g]=m[i];
        g++;
      }
  }
  for(i=0;i<g;i++)

    printf("%d",max[i]);

}
