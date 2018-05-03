#include<iostream>
#include<string.h>

using namespace std;

void namespace(char *Q)
{
    char *p;
    int n=strlen(Q);
    p=Q+n-1;
    if(strchr(Q=='.'))
    while(*p=='0')
    {
        *p='\0';
         p--;
    }
    if(*p=='0')
        *p='\0';
}

int main()
{
    char *pa,*pb;
    char A[101000], B[101000];
    while(cin>>A>>B)
    {
        *pa=A;*pb=B;
        compate(pa);
        compate(pb);
        while(*pa=='0')  pa++;
        while(*pb=='0')  pb++;
        if(strcmp(pa,pb)==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
