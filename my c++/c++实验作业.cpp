#include<iostream>

using namespace std;

void swap(double a,double b)
{
    double temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swap:";
    cout<<a<<" "<<b<<endl;
}

void sort(double a2,double b2)
{
    cout<<"Sort:";
    if(a2>b2)
        cout<<a2<<" "<<b2<<endl;
    else
        cout<<b2<<" "<<a2<<endl;
}

void max(double a3,double b3)
{
    cout<<"The max:";
    if(a3>b3)
        cout<<a3<<endl;
    else
        cout<<b3<<endl;
}

int main()
{
    double m,n;
    double&i=m;
    double&j=n;
    cout<<"Input two number"<<endl;
    cin>>m>>n;
    swap(i,j);
    sort(i,j);
    max(i,j);

  return 0;
}
