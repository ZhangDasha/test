#include<stdio.h>
int main()
{
    int n,i,j,h,m,s,h1,m1,s1,a[101];
    while(scanf("%d",&n)!=EOF)
    {
        h1=m1=s1=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<6;j++)
             scanf("%d",&a[j]);
            h1=a[0]+a[3];
            m1=a[1]+a[4];
            s1=a[2]+a[5];
            s=s1%60;
            m=(s1/60+m1)%60;
            h=m1/60+h1;
            printf("%d %d %d\n",h,m,s);
        }

    }

}
