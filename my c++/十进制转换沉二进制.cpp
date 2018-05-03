#include<stdio.h>
int main ()
{
	int a,b,m,n;
	int p[16]={ 0 };

	scanf("%d",&a);
	for(b=0;b<15;b++)
	{
       m=a%2;
	   n=a/2;
	   a=n;
	   p[b]=m;
	}
	for(b=15;b>=0;b--)
	{
		printf("%d",p[b]);
	    if(b%4==0)   printf(" ");
	}
return 0;
}
