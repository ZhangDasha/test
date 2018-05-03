///递归的思路:例如已知1到3和1到4的方法数，则1到5就等于前两者的和
#include<stdio.h>
int main()
{
    int m,n,a,b,i,j;
    double f[51];
    f[1]=0;f[2]=1;f[3]=2;
    for(i=4;i<51;i++)
        f[i]=f[i-1]+f[i-2];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d%d",&a,&b);
        printf("%0.lf\n",f[b-a+1]);
    }
}
