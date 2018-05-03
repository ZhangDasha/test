#include<stdio.h>
int main()
{
    int m,n,i;
    double a[51];
    while(scanf("%d",&n)!=EOF)
    {
        a[1]=1;a[2]=2;
        for(i=3;i<51;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        printf("%.0lf\n",a[n]);
    }
}
