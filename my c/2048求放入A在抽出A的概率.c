///错序公式： f(n)=(n-1)*(f(n-1)+f(n-2))
#include<stdio.h>
int main()
{
    int m,n,i,j,k;
    double f[21];
    f[1]=0;f[2]=1;
    for(i=3;i<21;i++)
        f[i]=(i-1)*(f[i-1]+f[i-2]);
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        for(i=1;i<=m;i++)
            f[m]/=i;
        printf("%.2lf%%\n",f[m]*100);
    }
}
