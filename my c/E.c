#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j,s,k;
    char a[101];
    int b[2]={1,3};
    getchar();
    while(1)
    {
        s=0;j=0;
        gets(a);
        m=strlen(a);
        for(i=0;i<m-1;i++)
        {
            if(a[i]=='-')
                continue;
            else
            {
               s=s+(a[i]-'0')*b[j];
                 ++j;
               if(j>1)
                  j=0;
            }
        }
        n=s%10;
        k=10-n;
        if(k==a[i]-'0')
            printf("Right\n");
        else
        {
           for(i=0;i<m-1;i++)
              {
                   printf("%c",a[i]);
              }
           printf("%d",k);
        }


    }
}
