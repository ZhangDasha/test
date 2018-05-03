#include<stdio.h>
int main()
{
    int m,n,i,j,a[101];
    while(scanf("%d",&n)!=EOF)
    {
        i=0;
        while(1)
        {
           a[i]=n%2;
           n=n/2;
           if(n==0)
                break;
           else
            i++;
        }
        for(j=i;j>=0;j--)
        {
            printf("%d",a[j]);
        }
        printf("\n");
    }
}
