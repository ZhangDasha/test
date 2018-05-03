#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,j,k;
    char a[101];
    scanf("%d",&n);
    while(n--)
    {
        getchar();
        int w=0,x=0,y=0,z=0;
        for(i=1;i<17;i++)
        gets(a);
         m=0;k=strlen(a);
        for(j=1;j<=i;j++)
        {

            if(a[i]>='A'&&a[i]<='Z')
                w++;
            else if(a[i]>='a'&&a[i]<='z')
                x++;
            else if(a[i]>='0'&&a[i]<='9')
                y++;
            else
                z++;
        }
        if(w!=0)
            m++;
        if(x!=0)
            m++;
        if(y!=0)
            m++;
        if(z!=0)
            m++;
        if(m<3)
            printf("NO\n");
        else if(m>=3&&k>=8&&k<=16)
            printf("YES\n");
    }
}
