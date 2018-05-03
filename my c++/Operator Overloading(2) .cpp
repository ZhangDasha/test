#include<iostream>
using namespace std;

class comp
{
public:
    comp (double=0,double=0);

    friend comp operator ++ (comp&);      ///ǰ׺�Լ������

    comp operator ++(int);                ///��׺�Լ������

    void print()const;
private:
    double real,imag;
};

comp::comp(double re,double im):real(re),imag(im)  {}

///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
comp comp::operator ++(int)    ///��׺
{
    comp temp = *this;
    real++;
    imag++;
    return temp;
}

comp operator ++ (comp& c)   ///ǰ׺
{
    c.real++;
    c.imag++;
    return c;
}
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void comp::print()const
{
    cout<<real<<"+"<<imag<<"i\n";
}

int main()
{
    comp c1(20.3,11.3);

    cout<<"Original value of c1:";
    c1.print();

    ++c1;
    cout<<"Value after ++c1:";
    c1.print();

    c1++;
    cout<<"Value after c1++:";
    c1.print();

    comp c2=++c1;
    cout<<"\nValue of c1 after c2=++c1:";
    c1.print();
    cout<<"Value of c2 after c2=++c1:";
    c2.print();

    c2=c1++;
    cout<<"\nValue of c1 after c2=c1++:";
    c1.print();
    cout<<"Value of c2 after c2=c1++:";
    c2.print();
}

