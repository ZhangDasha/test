#include<stdio.h>
int main()
{
	int n,m,i,a[1000],k=0,sum=0,j;
	a[0]=2;
	while(scanf("%d %d",&n,&m)!=EOF){

		for(i=1;i<n;i++)
		a[i]=a[i-1]+2;
	/*
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	*/
	if((n%m)==0)//正好可以全部求平均。
	{
    for(i=0;i<n;i++)
	{
		sum+=a[i];
		k++;
		if(k==m)
		{
			if(i!=n-1)
			{
			printf("%d ",sum/m);
			k=0;
			sum=0;
		}
		if(i==n-1)
		{
			printf("%d\n",sum/m);
			k=0;
			sum=0;
		}
		}
	}
	}

	else
	{
	j=n%m;
	for(i=0;i<n-j;i++)
		{
		sum+=a[i];
		k++;
		if(k==m)
		{
			printf("%d ",sum/m);
			k=0;
			sum=0;
		}
	}
	for(i=n-j;i<n;i++)
	{
		sum+=a[i];
		printf("%d\n",sum/j);
		sum=0;
	}
}
}
}
