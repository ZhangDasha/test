#include<iostream>
using namespace std;

class comp
{
public:
    comp(double,double);    ///operator function as a member
    comp operator + (comp&);             ///overloading operator +
    void print()const;

    double real,imag;

};

comp::comp(double re,double im):real(re),imag(im){}

///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
comp comp :: operator +(comp& c)     ///overloading operator +
{
    comp temp(0,0);
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return temp;
}
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void comp::print()const
{
    cout<<real<<"  +  "<<imag<<"i\n";
}


comp operator - (comp& c1,comp& c2)
{
    comp temp(0,0);
    temp.real=c1.real-c2.real;
    temp.imag=c1.imag-c2.imag;
    return temp;
}

int main()
{
    comp x(2.3,4.5), y(3.0,1.2);   ///创建X，Y两个对象

    comp z=x+y;     ///equivalent to z=x.operator + (y)
    z.print();

    z=x-y;             ///z=operator-(x,y)
    z.print();

    return 0;
}
