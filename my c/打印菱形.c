#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<4;i++)          //从第五行再次开始循环
    {
        for(j=0;j<=i-1;j++)   //
            printf(" ");
        for(k=1;k<=7-2*i;k++)
            printf("*");
        printf("\n");
    }
}
