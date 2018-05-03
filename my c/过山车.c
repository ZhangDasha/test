#include<stdio.h>
#include<stdlib.h>
int k,m,n;//可能匹配数，女生数和男生数
int map[600][600],cx[600],cy[600],m1[600];
int path(int u)
{
	int v;
	for(v=1;v<=n;v++)
	{
		if(map[u][v]&&m1[v]==0)//男女生相邻，且未访问过
		{
			m1[v]=1;
			if(cy[v]==-1||path(cy[v]))
			{
				cx[u]=v;
				cy[v]=u;
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	int i,j;
	while(scanf("%d%d%d",&k,&m,&n)==3&&k)
	{
		int cnt=0;//记录最大匹配数
		memset(cx,-1,sizeof(cx));//cx数组记录与x匹配的y点
		memset(cy,-1,sizeof(cy));//同理
		memset(map,0,sizeof(map));
		for(i=1;i<=k;i++)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			map[a][b]=1;
		}
		for(i=1;i<=m;i++)
		{
			if(cx[i]==-1)
			{
				memset(m1,0,sizeof(m1));
				cnt+=path(i);//来找每一条增广路，可使得匹配加1；
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
