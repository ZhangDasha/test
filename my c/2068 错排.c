///----------------------------------------
///错排公式：f(n)=(n-1)*[f(n-1)+f(n-2)]
///N个人中选出M个（组合），在对M进行错排
///----------------------------------------

#include<stdio.h>

__int64 a[15]={0,0,1};

int fan(__int64 n,__int64 m)
{
     __int64 i;
     __int64 s=1;
     for(i=0;i<m;i++)
     {
        s*=(n-i)/(i+1);
     }
     return s;
}

int main()
{
    __int64 i;
    for(i=3;i<15;i++)
    {
       a[i]=(i-1)*(a[i-1]+a[i-2]);
    }
    __int64 n,m,sum;
    while(~(scanf("%d",&n))&&(n!=0))
    {
       sum=1;
       m=n/2;
       for(i=2;i<=m;i++)
       {
           sum+=fan(n,i)*a[i];
       }
       printf("%.2lf\n",sum);
    }
}
