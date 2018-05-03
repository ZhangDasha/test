#include<iostream>
using namespace std;

class Demo
{
    int n;
    static int sum;
public:
    Demo(int x)   {n=x;}
    void add()     {sum+=n;}
    void disp()    {cout<<"n="<<n<<",sum="<<sum<<endl;}
};

int Demo::sum=0;

int main()
{
    Demo a(2),b(3),c(5);
    a.add();    a.disp();
    b.add();    b.disp();
    c.add();    c.disp();
    return 0;
}
