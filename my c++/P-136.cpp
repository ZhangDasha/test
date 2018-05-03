#include<iostream>

using namespace std;

class A
{
    int a;
public:
    A()
    {
        a=0;
        cout<<"constructing default A"<<endl;
    }
    A(int x)
    {
        a=x;
        cout<<"constructing A"<<endl;
    }
    ~A()
    {
        cout<<"destructing A"<<endl;
    }
};

class B
{
    A a;
    public:
    B()
    {
        cout<<"constructing default B"<<endl;
    }
    B(int x):a(x)
    {
        cout<<"constructing B"<<endl;
    }
    ~B()
    {
        cout<<"destructing B"<<endl;
    }
};

int main()
{
    B b1;
    B b2(10);
    return 0;

}
