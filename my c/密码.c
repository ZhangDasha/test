#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j,t;
    char a[101];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
      gets(a);
      int t1=0,t2=0,t3=0,t4=0;
      t=0;
      m=strlen(a);
      for(i=0;i<m;i++)
      {
          if(a[i]>='a'&&a[i]<='z')
            t1++;
          else if(a[i]>='A'&&a[i]<='Z')
            t2++;
          else if(a[i]>='0'&&a[i]<='9')
            t3++;
          else
            t4++;
      }
      if(t1!=0)
        t++;
      if(t2!=0)
        t++;
      if(t3!=0)
        t++;
      if(t4!=0)
        t++;
      if(m>=8&&m<=16&&t>=3)
        printf("YES\n");
      else
        printf("NO\n");
    }
}
