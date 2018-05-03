///错排公式与组合公式
///f(n)=(n-1)*(f(n-1)+f(n-2))种找错的方式
///n!/[m!*(n-m)!]个新郎找错新娘
#include<stdio.h>
int main()
{
    __int64 f[21],h[21];
    int a,m,n,i,j;
    f[1]=0;f[2]=1;
    for(i=3;i<21;i++)
        f[i]=(i-1)*(f[i-1]+f[i-2]);
    scanf("%d",&a);
    while(a--)
    {
        h[0]=1;
        scanf("%d%d",&n,&m);
        for(j=1;j<21;j++)
            h[j]=j*h[j-1];
        printf("%I64d\n",h[n]/(h[m]*h[n-m])*f[m]);
    }
}
