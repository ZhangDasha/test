#include<stdio.h>
int main()
{
    int x,n,i,j;
    char m;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        scanf("%c%d",&m,&x);
        getchar();
        if(m>='a'&&m<='z')
            printf("%d\n",'a'-m+x-1);
        else if(m>='A'&&m<='Z')
            printf("%d\n",m-'A'+x+1);
    }
}
