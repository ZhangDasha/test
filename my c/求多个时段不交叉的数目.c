#include<stdio.h>
int main()
{
    int m,n,i,j,a[101],b[101];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            return 0;
        else
        {
            for(i=0;i<n;i++)
                 scanf("%d%d",&a[i],&b[i]);
            int l=0,k=0;
            for(i=0;i<n;i++)
                for(j=i+1;j<n;j++)
            if(b[i]>b[j])
            {
                l=a[i];a[i]=a[j];a[j]=l;
                k=b[i];b[i]=b[j];b[j]=k;
            }
            int count=0,s=0;
            for(i=0;i<n;i++)
              if(a[i]>=s)
              {
                  count++;s=b[i];
              }
            printf("%d\n",count);
        }
    }
}
