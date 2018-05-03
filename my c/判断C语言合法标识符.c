/*
标识符由字母、下划线、数字这三个方面组成，但开头必须是字母或下划线。
另外，关键字不能是标识符，如main等。*/

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
