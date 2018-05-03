#include<stdio.h>
int main()
{
    __int64 m,n,s;
    while(scanf("%I64X%I64X",&m,&n)!=EOF)
    {
        s=m+n;
        if(s<0)
            printf("-%I64X\n",-s);
        else
            printf("%I64X\n",s);
    }
}
