#include<stdio.h>
int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF&&(1<=m<=n<=16))
        printf("%d\n",m*n/2);
}
