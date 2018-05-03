#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
       printf("+");
       for(i=0;i<n;i++)
           printf("-");
        printf("+\n");
       for(j=0;j<m;j++)
       {
           printf("|");
           for(i=0;i<n;i++)
             printf(" ");
           printf("|\n");
       }
       printf("+");
       for(i=0;i<n;i++)
          printf("-");
       printf("+\n");
       printf("\n");
    }
}
