#include<stdio.h>
#include<string.h>   //string.h是一个和字符串处理相关的头文件
int main()
{
    char c[1001];
    int i,n;
    while(gets(c)!=NULL)   //NULL空格
    {
        n=0;
        for(i=0;i<strlen(c);i++)  //strlen()函数的作用是统计给定字符串的长度
        {
            if(c[i]=='p'&&c[i+1]=='o'&&c[i+2]=='i')
               {n++;}
        }
        printf("%d\n",n);
    }
}


