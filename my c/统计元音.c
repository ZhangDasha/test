#include<stdio.h>
#include<string.h>
int main(void)
{
    int m,n,i,j,a1,e1,i1,o1,u1;
    char a[101];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(a);
        a1=0;e1=0;i1=0;u1=0;o1=0;
        m=strlen(a);
        for(j=0;j<m;j++)
        {
            if(a[j]=='a')  a1++;
            else if(a[j]=='e')  e1++;
            else if(a[j]=='i')  i1++;
            else if(a[j]=='o')  o1++;
            else if(a[j]=='u')  u1++;

        }
            printf("a:%d\n",a1);
            printf("e:%d\n",e1);
            printf("i:%d\n",i1);
            printf("o:%d\n",o1);
            printf("u:%d\n",u1);
            if(i!=n)
                printf("\n");

    }
    return 0;

}
