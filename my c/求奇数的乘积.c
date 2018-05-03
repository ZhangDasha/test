#include<stdio.h>
int main()
{
    int m,n,i,j;
    while(scanf("%d",&m)!=EOF)
    {
        j=1;
        for(n=0;n<m;n++)
        {
            scanf("%d",&i);
            if(i%2!=0)     j=j*i;
        }
        printf("%d\n",j);
    }
    return 0;
}
