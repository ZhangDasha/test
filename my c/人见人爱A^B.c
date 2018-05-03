#include<stdio.h>
int main()
{
    int m,n,i,j,a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
            return 0;
        for(i=0,j=1;i<b;i++)
        {
            j=(j*a)%1000;  ///j=j*a
        }
        printf("%d\n",j);  ///printf("%d",j%1000)  ???
    }
}
