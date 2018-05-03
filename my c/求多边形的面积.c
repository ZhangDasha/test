///²æ³Ë s=X1*Y2-X2*Y1+......
#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j,x[101],y[101];
    double s;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            return 0;
        else
        {
            for(i=0;i<n;i++)
                scanf("%d%d",&x[i],&y[i]);
            s=0;
            m=n;
            x[m]=x[0];y[m]=y[0];
            for(i=0;i<m;i++)
            {
                s+=x[i]*y[i+1]-x[i+1]*y[i];
            }
            s=fabs(s);
            printf("%.1lf\n",s/2);
        }
    }
}
