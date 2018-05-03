///本题思路是求n有几个约数（包括1和自身）如果有奇数个约数,结果也就是1；否则为0
#include<stdio.h>
int main()
{
    int m,n,i,a;
    while(scanf("%d",&n)!=EOF)
    {
        for(a=0,i=1;i<=n;i++)
        {
            if(n%i==0)
                a++;
        }
        if(a%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
}
