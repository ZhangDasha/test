#include<stdio.h>
#include<string.h>   //string.h��һ�����ַ���������ص�ͷ�ļ�
int main()
{
    char c[1001];
    int i,n;
    while(gets(c)!=NULL)   //NULL�ո�
    {
        n=0;
        for(i=0;i<strlen(c);i++)  //strlen()������������ͳ�Ƹ����ַ����ĳ���
        {
            if(c[i]=='p'&&c[i+1]=='o'&&c[i+2]=='i')
               {n++;}
        }
        printf("%d\n",n);
    }
}


