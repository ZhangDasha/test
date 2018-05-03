#include <stdio.h>
#include <math.h>
int main()
{
	int a[101],n,i,j,k,temp;
	while(scanf("%d",&n)!=EOF&&n)    //‘&&n'表示判断n是否为0
	{
		k=0;
		a[101]=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			for(j=n-1;j>i;j--)      //冒泡排序
			{
				if(abs(a[j])>abs(a[j-1]))
				{
					temp=a[j-1];
					a[j-1]=a[j];
					a[j]=temp;
				}
			}
		for(i=0;i<n;i++)
		{
			if(k==0)            //K控制空格
			{
				printf("%d",a[i]);
			k++;
			}
			else
				printf(" %d",a[i]);

		}
		printf("\n");
	}
	return 0;
}
