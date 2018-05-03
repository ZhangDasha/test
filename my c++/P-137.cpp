#include<iostream>
using namespace std;

class Demo
{
    int n;
public:
    Demo(){}
    Demo(int m)  {n=m;}
    friend Demo square(Demo s)
    {
        Demo s1;
        s1.n=s.n*s.n;
        return s1;
    }
    void disp()
    {
        cout<<n<<endl;
    }
};

int main()
{
    Demo a(10);
    a=square(a);
    a.disp();
}
