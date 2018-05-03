#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j,k,a;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        m=3;
        for(i=0;i<a;i++)
        {
            if(i<=0)
                k=1;
            else
                k=k*2;
            m=m+k;
        }
        printf("%d\n",m);
    }
}
