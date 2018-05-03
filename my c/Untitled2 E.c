
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,b[2]={1,3},s,n,m;
    char a[20];
    while(1)
    {
        gets(a);
        t=strlen(a);
        s=0;
        j=0;
        for(i=0;i<t-1;i++)
        {
            if(a[i]=='-') continue;
            else
            {s=s+(a[i]-'0')*b[j];
            ++j;
            if(j>1) j=0;}
        }
        m=s%10;
        n=10-m;
        if(n==a[i]-'0')
        {
            printf("Right\n");
        }
        else
        {
            for(i=0;i<t-1;i++)
            {
                printf("%c",a[i]);
            }
            printf("%d",n);
        }
    }
}
