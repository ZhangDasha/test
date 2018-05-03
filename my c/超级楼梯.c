///ì³²¨ÄÇÆõÊýÁÐ
#include<stdio.h>
int fib(int m)
{
    if(m<=3)
        return m-1;
    else if(m>3)
        return fib(m-1)+fib(m-2);
}
int main()
{
    int m,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        printf("%d\n",fib(m));
    }
    return 0;
}
