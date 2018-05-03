#include<stdio.h>
int main()
{
    int m,n,s,i,j;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        i=0;
        s=2*n;
        for(j=0;j<n;j++)
         {
             if(n%m==0)
           {
            i=s/m;

           }

             else
           {
            i=s/(m-1);
            j=(s-i)/(n%m);

           }
         }
         printf("%d",i);
         //printf("%d%d",i,j);
    }
}
