#include<stdio.h>
int main()
{
    int m,n,i,j;
    double a[51];///数组不能用int
    while(scanf("%d",&n)!=EOF)
    {
        a[0]=0;a[1]=3;a[2]=a[3]=6;
        for(i=4;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-2]*2;
        }
        printf("%0.lf\n",a[n]);
    }
}
