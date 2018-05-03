
#include<stdio.h>
int main(){
	int n,m,i,j;
	while(~scanf("%d %d",&n,&m)){
		getchar();
		for (i =1;i<=n-m;i+=m){
			printf("%d ",2*i+m-1);
		}
		printf("%d\n",i+n);
	}
}
