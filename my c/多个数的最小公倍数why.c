#include<stdio.h>
int main()
{
    int i,n,s[100],a;
    while(scanf("%d",&n)!=EOF)

    {
        a=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&s[i]);
            if(a<s[i])  a=s[i];
        }
        for(i=1;i<=n;i++)
        {
          if(a%s[i]!=0)     ///辗转相除法求最大公约数或最小公倍数
          {                 ///最小公倍数为Multi=a*b／(最大公约数);
              a++;
              i=0;
          }
        }
        printf("%d\n",a);

    }
    return 0;

}
