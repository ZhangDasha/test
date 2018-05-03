#include<stdio.h>
int main()
{
    int m,n,i,sum,a[101],k;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {

            scanf("%d",&a[i]);
            sum=sum+a[i];
        }

        if(sum%4==0)
        {
            k=sum/4;
        }
        else
        {
            k=sum/4+1;
        }
        printf("%d\n",k);
    }
}
