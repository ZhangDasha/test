///f(n)=(f(n-2)+f(n-1))*2
# include <stdio.h>
int main()
{
	int m,n,i;
	long long f[42];///__int a[42];
	f[0]=0;f[1]=3;f[2]=8;
	for(i=3;i<42;i++)
           f[i]=2*(f[i-2]+f[i-1]);
    while(scanf("%d",&i)!=EOF)
        printf("%I64d\n",f[i]);

}
