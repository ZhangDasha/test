#include "stdio.h"

int main()
{
	int n,a[55];
	int sum,add,i,temp;
	while(scanf("%d",&n),n)
	{
		sum=0;add=0;//sum是总母牛数，add是小牛长大成大母牛的数量
		for(i=0;i<n;i++)
		{
			a[i]=1+add;//每年1+add只大母牛产一只小牛
			if(i>=4)
			{
				a[i]+=a[i-3];add+=a[i-3];
				//第4年开始，a[i-3]只小母牛长大成为大母牛进入add行列，生出a[i-3]只小母牛加入a[i]行列。
			}
			sum+=a[i];
		}
		printf("%d\n",sum);
	}
}
