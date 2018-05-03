#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    int m,n;
    while(gets(a)!=NULL)
       {
           n=0;
           for(m=0;m<strlen(a);m++)
          {
             if(a[m]=='p'&&a[m+1]=='o'&&a[m+2]=='i')
             n++;
          }
           printf("%d\n",n);
       }
}
