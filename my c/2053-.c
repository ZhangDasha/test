///����˼·����n�м���Լ��������1�����������������Լ��,���Ҳ����1������Ϊ0
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
