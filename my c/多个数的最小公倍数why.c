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
          if(a%s[i]!=0)     ///շת����������Լ������С������
          {                 ///��С������ΪMulti=a*b��(���Լ��);
              a++;
              i=0;
          }
        }
        printf("%d\n",a);

    }
    return 0;

}
