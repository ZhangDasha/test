#include <stdio.h>
#include <math.h>
int main()
{
	int a,m,n,i,j,t,x,s;
		while(scanf("%d%d",&m,&n)!=EOF)
		{
			t=0;
			for(i=1;i<=m;i++)
				for(j=1;j<=n;j++)
				{
					scanf("%d",&a);

				    if(abs(a)>abs(t))
					{
					   t=a;
					   x=i;
					   s=j;
					}
				}
				printf("%d %d %d\n",x,s,t);
		}
}
