#include<stdio.h>
int main()
{
    int n,m,i,t,s,f,y,z,k,sum,a[101];
    while(scanf("%d",&n)!=EOF&&n)
    {
        sum=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            t=a[i]/100;
            y=(a[i]%100)/50;
            z=(a[i]%100%50)/10;
            k=(a[i]%100%50%10)/5;
            s=(a[i]%100%50%10%5)/2;
            f=(a[i]%100%50%10%5%2)/1;
            sum+=t+y+z+k+s+f;
        }
        printf("%d\n",sum);
    }
}
