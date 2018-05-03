#include<stdio.h>
#include<string.h>
int main()
{
    int  m,n,i,j;
    char a[101];
    while(gets(a))
    {
        m=strlen(a);

       for(i=0;i<m;i++)
       {
           if(i==0||a[i-1]==' ')
            a[i]=a[i]-32;
       }
       printf("%s\n",a);       ///为什么输出时不能写成a[i] printf("%c\n",a[i]);
    }
}
