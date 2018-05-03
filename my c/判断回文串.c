#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j;
    char a[101];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(a);
        m=strlen(a);
        for(i=0;i<m;i++)
        {
            if(a[i]!=a[m-i-1])    ///关键在数组中找到对应的数
              {
                  j=0;
                    printf("no\n");
                    break;
              }
            else
                j=1;
        }
        if(j==1)
            printf("yes\n");
    }
}
