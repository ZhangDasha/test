#include<stdio.h>
int main()
{
    int m,n,i;
    double sum,t;
    scanf("%d",&m);
    while(m--)
    {
        sum=0;
        t=1;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            sum+=t/i;
            t=-t;
        }
        printf("%.2lf\n",sum);
    }
}
