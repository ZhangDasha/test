#include<stdio.h>
int main()
{
    int sum,n,i,k,a[55];
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        sum=0;k=0;  //sum是总母牛数，k是小牛长大成大母牛的数量

        for(i=0;i<n;i++)
        {
            a[i]=k+1;
            if(i>=4)
            {
                a[i]+=a[i-3];k+=a[i-3];
   //第4年开始，a[i-3]只小母牛长大成为大母牛进入k行列，生出a[i-3]只小母牛加入a[i]行列。
            }
            sum+=a[i];
        }
        printf("%d\n",sum);
    }
}
