#include<stdio.h>
#include<math.h>
void main()
{
	float x,y,r,k;
	do
	{
		printf("Input x,y,r,k");
		scanf("%f%f%f%f",&x,&y,&r,&k);
	}
	while(r>=k)
	{	x=fabs(x)-k;  y=fabs(y)-k;
	    y=x*x+y*y;
	}
	if(y<=r*r)
		printf("�߶�Ϊ10��\n");
	else
		printf("�߶�Ϊ0��\n");
}