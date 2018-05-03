#include<stdio.h>
int main()
{
    int v,n,i,j,max,a[99][2];
    while(scanf("%d%d",&v,&n)!=EOF)
    {
        max=0;
        for(i=1;i<=n;i++)
            for(j=1;j<=2;j++)
            scanf("%d",&a[i][j]);
        if(a[i][1]+a[i+1][1]<=v)
        {
            max=a[i][2]+a[i+1][2];
            printf("%d\n",max);
        }
        else  break;
    }
}
