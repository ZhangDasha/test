#include<stdio.h>
int main()
{
    int a,b,c,m,n,i,sum,num;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        num=0;
        for(i=m;i<=n;i++)
        {
            a=i/100;           //a=i/100;  b=(i-a*100)/10 ; c=(i-a*100-b*10);
            b=(i/10)%10;
            c=i%10;
            sum=a*a*a+b*b*b+c*c*c;
            if(i==sum)
            {
                num++;
                printf(num==1?"%d":" %d",i);
            }
            if(i==n&&num!=0)  printf("\n");
        }
        if(num==0)   printf("no\n");

    }
}
