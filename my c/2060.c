#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>6)
           {
               b+=(a-6)+(a-6)*7+27;

           }
        else
            {
               b=b+(15-a)*a/2;///¹«Ê½
            }
        if(b>=c)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
