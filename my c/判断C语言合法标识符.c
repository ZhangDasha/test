/*
��ʶ������ĸ���»��ߡ�����������������ɣ�����ͷ��������ĸ���»��ߡ�
���⣬�ؼ��ֲ����Ǳ�ʶ������main�ȡ�*/

#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,j,k;
    char ch[101];
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        for(i=0;i<n;i++)
        {
            gets(ch);
            m=strlen(ch);
            if(ch[0]>='a'&&ch[0]<='z'||ch[0]>='A'&&ch[0]<='Z'||ch[0]=='_')
                {
                    k=0;
                    for(j=0;j<m;j++)
                    {
                        if((ch[j]>='a'&&ch[j]<='z')||(ch[j]>='A'&&ch[j]<='Z')||ch[j]=='_'||(ch[j]>='0'&&ch[j]<='9'))
                            k++;
                    }
                    if(k==m)
                        printf("yes\n");
                    else
                        printf("no\n");

                }
            else
                printf("no\n");
        }
    }
}
