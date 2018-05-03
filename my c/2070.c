#include<stdio.h>

__int64 f[51]={0,1,1};
int fan(int n)
{
    int i;
   for(i=3;i<=n;i++)
        f[i]=f[i-1]+f[i-2];
   return f[i];
}

int main()
{

    int n;
    while(scanf("%d",&n)!=EOF&&(n!=-1))
        {
            fan(n);
            printf("%I64d\n",f[n]);
        }

}
