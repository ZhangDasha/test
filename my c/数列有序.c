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
            printf("%d ",a[i]);//�����С��m�Ĳ���
         else  break;
        printf("%d",m);  //���M
        for(;i<n;i++)
            printf(" %d",a[i]);//�������m�Ĳ���
        puts(" ");
    }
}
