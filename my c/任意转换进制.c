#include<stdio.h>
int main()
{
	int N,R;
	while(scanf("%d %d",&N,&R)!=EOF)
	{
		int m[1000]={0},n,i;
		if(N<0)
		{
			N=-N;
			printf("-");
		}
		i=0;
		while(N!=0)
		{
			m[i]=N%R;
			i++;
			N=N/R;
		}
		for(n=i-1;n>=0;n--)
		{  if(R>=10)
		 {  if(m[n]>=10)
			  {
				  m[n]=m[n]+'A'-10;
		          printf("%c",m[n]);
			 }
		 else
			 printf("%d",m[n]);
		  }
		else
			printf("%d",m[n]);

		}
		printf("\n");
	}
	return 0;
}
