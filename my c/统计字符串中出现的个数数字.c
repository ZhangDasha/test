#include "stdio.h"

int main()
{
	int n,a[55];
	int sum,add,i,temp;
	while(scanf("%d",&n),n)
	{
		sum=0;add=0;//sum����ĸţ����add��Сţ����ɴ�ĸţ������
		for(i=0;i<n;i++)
		{
			a[i]=1+add;//ÿ��1+addֻ��ĸţ��һֻСţ
			if(i>=4)
			{
				a[i]+=a[i-3];add+=a[i-3];
				//��4�꿪ʼ��a[i-3]ֻСĸţ�����Ϊ��ĸţ����add���У�����a[i-3]ֻСĸţ����a[i]���С�
			}
			sum+=a[i];
		}
		printf("%d\n",sum);
	}
}
