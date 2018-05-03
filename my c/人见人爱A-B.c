#include<stdio.h>
int main()
{
    int m,n,i,j,a[101],b[101],c[101];
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            return 0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<m;i++)
            scanf("%d",&b[i]);
        int k=0,t=0,count=0;
        for(i=0;i<n;i++)
         {
                for(j=0;j<m;j++)
            {
                if(a[i]==b[j])
                  t=1;
            }
            if(t==0)
                c[k++]=a[i];
            else
                count++;
            t=0;
         }
         if(count==n)
            printf("NULL");
         else
         for(i=0;i<k;i++)
         for(j=i+1;j<k;j++)
         {
             if(c[i]>c[j])
             {
                 t=c[i];
                 c[i]=c[j];
                 c[j]=t;
             }

         }
         for(i=0;i<k;i++)
            printf("%d ",c[i]);
            printf("\n");

    }
}
