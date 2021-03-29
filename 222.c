#include<stdio.h>
int main()
{
    int n,i,j,k,l=0,g=0,ma=0;
    scanf("%d",&n);
    if(n>=2&&n<=1000)
    {
        int m[n],max[n],mi[n];
        for(i=0; i<n; i++)
            scanf("%d",&m[i]);
        for(i=1; i<n; i++)
        {
            for(j=0; j<i; j++)
            {
                if(m[i]<m[j])
                {
                    k=m[i];
                    m[i]=m[j];
                    m[j]=k;
                }
            }
        }
        max[g]=m[0];
        for(i=0; i<n; i++)
        {
            l=0;
            for(j=0; j<n; j++)
            {
                if(m[i]==m[j])
                    l++;
            }
            if(l>=ma)
            {
                if(max[g]!=m[i])
                    g++;
                if(l>ma)
                {
                    for(i=0; i<=g; i++)
                    {
                        max[i]=0;
                    }
                    g=0;
                }
                max[g]=m[i];
                ma=l;
            }
        }
        for(i=0; i<=g; i++)
        {
            if(max[i]>=1&&max[i]<=10000)
            printf("%d ",max[i]);
        }
    }
    return 0;
}
