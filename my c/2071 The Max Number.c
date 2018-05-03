#include<stdio.h>
int main()
{
    int n,m,i,j;
    double a[101];
    while(scanf("%d",&n)!=EOF)
    {
        __int64 t=0;
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%lf",&a[i]);
        for(i=0;i<m;i++)
        {
            for(j=m-1;j>i;j--)
            {
             if(a[i]<a[i+1])
                {
                    t=a[i];a[i]=a[i+1];a[i+1]=t;
                }
            }
        }
         printf("%.2lf\n",a[0]);
    }
}
