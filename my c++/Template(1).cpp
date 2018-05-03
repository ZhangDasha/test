#include<iostream>

using namespace std;

template<class T>
T getMax(T a,T b)
{
    //T result;
    //result = (a>b)?a:b;
    return (a>b?a:b);
}

int main()
{
    int a=5,b=10,c;
    float i=1.1,j=3.12,k;
    c=getMax<int>(a,b);
    k=getMax<float>(i,j);
    cout<<c<<endl;
    cout<<k<<endl;
    return 0;
}
