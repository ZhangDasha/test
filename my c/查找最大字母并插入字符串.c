#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,j,k,t;
    char a[101];
    while(scanf("%s",a)!=EOF)  ///scanf����������
    {
        m=a[0];
        k=strlen(a);
        for(i=0;i<k;i++)
        {
           if(m>a[i+1])
             m=m;
           else              ///Ѱ�����ֵ������MΪ���ֵ
             m=a[i+1];
        }
        for(i=0;i<k;i++)
        {
            if(a[i]==m)
                printf("%c(max)",a[i]);     ///ѭ�����
            else
                printf("%c",a[i]);
        }
        printf("\n");
    }
}
