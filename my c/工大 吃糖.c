#include<stdio.h>
int main()
{
    int n,m,i,j,h,k=0,a[101],b[101],c[101];
    c[0]=0;
    scanf("%d",&n);
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        for(h=0;h<i;h++)
              c[h+1]=c[h]+a[i];

        scanf("%d",&m);
        for(j=0;j<m;j++)
            scanf("%d",&b[j]);
        for(j=0;j<m;j++)

                {    k=b[j];
                    if(c[h]<k&&k<c[h+1])
                printf("%d",h+1);

                }
}
