#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float m,n,s;
    while(scanf("%f%f",&n,&m)!=EOF)
    {
        s=0;
        for(i=0;i<m;i++)
        {
            s+=n;
            n=sqrt(n);
        }
        printf("%.2f\n",s);
    }
}
