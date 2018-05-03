///--------------------------------------------

///N个中任意选出M个，在对M个进行错排

///--------------------------------------------

#include<iostream>
#include<stdio.h>

using namespace std;

__int64 a[15]={0,0,1};

int fan(__int64 n,__int64 m)
{
    __int64 s=1;
    for(__int64 i=0;i<m;i++)
    {
        s=s*(n-i)/(i+1);
    }
    return s;
}

int main()
{
    for(__int64 i=3;i<15;i++)
        a[i]=(i-1)*(a[i-1]+a[i-2]);
    __int64 n,m,sum;
    while(scanf("%d",&n)!=EOF&&(n!=0))
    {
        sum=1;
        m=n/2;
        for(__int64 i=2;i<=m;i++)
            sum=sum+fan(n,i)*a[i];
        cout<<sum<<endl;
    }
}
