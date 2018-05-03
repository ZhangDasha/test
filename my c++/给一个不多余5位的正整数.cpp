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
		printf("高度为10米\n");
	else
		printf("高度为0米\n");
}