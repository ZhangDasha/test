#include<stdio.h>
int main()
{
    int m,n,a,b,c;
    float k;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        a=0,b=0,c=0;
        for(m=0;m<n;m++)
          {
           scanf("%f",&k);
           if(k==0)
               a++;
           else if(k<0)
               b++;
           else
               c++;
          }
          printf("%d %d %d\n",b,a,c);
    }
    return 0;
}
