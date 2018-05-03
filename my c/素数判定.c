#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,i,j,m,n;
    while(scanf("%d%d",&x,&y)!=EOF&&(x!=0||y!=0))
       {
           n=0;
           for(i=x;i<y;i++)
            {
                m=i*i+i+41;
                for(j=2;j<=sqrt(m);j++)
                {
                    if(m%j==0)     //Õû³ý
                        n++;
                }
            }
            if(n==0)
                printf("OK\n");
            else
                printf("Sorry\n");
       }
       return 0;
}
