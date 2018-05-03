#include<iostream>
using namespace std;

class A
{
public:
    A()
    {
        t();
        cout<<" i from A is"<<i<<endl;
    }
    void t()
    {
        setI(20);
    }
    virtual void setI(int m)
    {
        cout<<"set a value in Class A\n";
        i=2*m;
    }
protected:
    int i;
};

class B:public A
{
public:
    B()
    {
        t();
        cout<<"i from B is "<<i<<endl;
    }
    virtual void setI(int m)
    {
        cout<<"set a value in Class B\n";
        i=3*m;
    }
};

int main()
{
    A*p=new B();
    return 0;
}
