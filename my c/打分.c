#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    float t,s,ave;
    while(scanf("%d",&n)!=EOF)
    {
        s=0;
        for(i=0;i<n;i++)
           scanf("%d",&a[i]);
        for(i=0;i<=n;i++)
        for(j=n-1;j>i;j--)
        {
            if(a[j-1]>a[j])
            {
               t=a[j];a[j]=a[j-1];a[j-1]=t;   //ц╟ещеепР
            }
        }
        for(i=0;i<n;i++)
        s=s+a[i];
        ave=(s-a[0]-a[n-1])/(n-2);
        printf("%.2f\n",ave);
    }
    return 0;
}
