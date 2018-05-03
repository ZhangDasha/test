#include<stdio.h>
int main()
{
    int sum,n,i;
    while(scanf("%d",&n)!=EOF)
    {
        sum=1;
        for(i=1;i<n;i++)
        {
            sum=(sum+1)*2;
        }
        printf("%d\n",sum);
    }
}
