#include<stdio.h>
int main()
{
	int a[101],i,t,j,m;
	float ave,s;
	while(scanf("%d",&m)!=EOF)
	{
		s=0;
		for(i=0;i<m;i++)
		scanf("%d",&a[i]);
		for(i=0;i<m;i++)
		for(j=m;j>i;j--)
		{
			if(a[j-1]>a[j])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
		for(i=0;i<m;i++)
		s=s+a[i];
		ave=(s-a[0]-a[m-1])/(m-2);

		printf("%.2f\n",ave);
	}
	return 0;
}
