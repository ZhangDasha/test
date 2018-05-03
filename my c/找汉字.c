///注：汉字的ASCII小于零
#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j;
    char a[999];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(a);
        m=strlen(a);
        j=0;
        for(i=0;i<m;i++)
        {
            if(a[i]<0)
                j++;
        }
        printf("%d\n",j/2);///一个汉字由两个ASII码表示
    }
}
