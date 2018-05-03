#include<stdio.h>
int main()
{
    int m,n,i,a[101];
    while(scanf("%d%d",&n,&m)!=EOF&&(n||m))
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
         if(m>a[i])
            printf("%d ",a[i]);//先输出小于m的部分
         else  break;
        printf("%d",m);  //添加M
        for(;i<n;i++)
            printf(" %d",a[i]);//输出大于m的部分
        puts(" ");
    }
}
