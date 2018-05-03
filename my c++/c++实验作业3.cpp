#include<iostream>

using namespace std;

void print(int a[])
{
    int i,j,temp;
    for(i=0;i<5;i++)
        for(j=4;j>i;j--)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    cout<<"The sort:";
    for(i=0;i<5;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"The max:";
    cout<<a[0]<<endl;
}

void print(double b[])
{
    int m,n,temp2;
    for(m=0;m<5;m++)
        for(n=4;n>m;n--)
    {
       if(b[m]<b[n])
       {
           temp2=b[m];
           b[m]=b[n];
           b[n]=temp2;
       }
    }
    cout<<"The sort:";
    for(m=0;m<5;m++)
        cout<<b[m]<<" ";
    cout<<endl;
    cout<<"The max:";
    cout<<b[0]<<endl;
}

int main()
{
    int s,t;
    int a2[5];
    double b2[5];
    cout<<"Input five int number"<<endl;
    for(s=0;s<5;s++)
        cin>>a2[s];
    cout<<"Input five double number"<<endl;
    for(t=0;t<5;t++)
        cin>>b2[t];
    print(a2);
    print(b2);

    return 0;
}

