#include<stdio.h>
int main()
{
    int m,i,j,a[50][50];
    while(scanf("%d",&m)!=EOF&&(m>=1)&&(m<=30))
    {
        for(i=0,j=0;i<m;i++)
      {
          a[i][0]=1;
          a[i][i]=1;
      }
        for(i=1;i<m;i++)
        for(j=1;j<=i;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        for(i=0;i<m;i++)
        for(j=0;j<=i;j++)
            {
               if(i==j)
                  printf("%d \n",a[i][j]);
               else
                  printf("%d ",a[i][j]);
            }
        printf("\n");
    }
}

