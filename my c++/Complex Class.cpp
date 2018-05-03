#include<iostream>
using namespace std;
class comp
{
    public:
    comp();
    comp(double);
    comp(double,double);

    //copy constructor
    comp(const comp&c);

    //operator function as members
    comp& operator = (comp&);
    comp& operator ++();
    comp& operator +=(comp);
    comp& operator +=(double);

    //后置自加
    friend comp operator ++ (comp&,int);

    //member function
    void print()const;

    //additional mender functions
    double getReal()const;
    double getImag()const;
private:
    double real,imag;
};

//mixed arithmetic(算法)
comp operator +(comp&,comp&);
comp operator +(comp&,double);
comp operator +(double,comp&);
bool operator ==(comp&,comp&);

//constructor and copy constructor

comp::comp():real(0),imag(0)
{
    cout<<"constructing ...real=image=0\n";     //complex(double r=0,double i=0)
}

comp::comp(double r):real(r),imag(0)
{
    cout<<"constructor ...image=0\n";
}
comp::comp(double r,double i):real(r),imag(i)
{
    cout<<"construtor ..\n";
}

//operator function an member
comp& comp::operator=(comp&a)
{
    real=a.real;
    imag=a.imag;
    cout<<"Overloading assignment...\n";
    return *this;
}

comp& comp::operator++()
{
    real++;
    imag++;
    cout<<"Overloading operator prefix ++...\n";
    return *this;
}

comp& comp::operator +=(comp a)
{
    real=a.real;
    imag=a.imag;
    cout<<"Overloading operator class +=class...\n";
    return *this;
}

comp& comp::operator +=(double a)
{
    real+=a;
    cout<<"Overloading operator class +=double...\n";
    return *this;
}
void comp::print()const
{
    cout<<real<<"+"<<imag<<"i\n";
}

double comp::getReal()const
{
    return real;
}

double comp::getImag()const
{
    return imag;
}

//operator function as ...mixed arithmetic

comp operator + (comp& a,comp& b)
{
    cout<<"Overloading operator class +class...\n";
    comp temp=a;
    return temp+=b;
}

comp operator + (comp& a,double b)
{
    cout<<"Overloading operator double +class ,,,\n";
    comp temp=b;
    return temp+=a;
}
comp operator + (double a,comp& b)
{
    cout<<"Overloading operator double + class...\n";
    comp temp = b;
    return temp += a;
}

//后置自加
comp operator ++ (comp&a,int)
{
    cout<<"Overloading postfix++..\n";
    comp temp=a;
    a.real++;
    a.imag++;
    return temp;
}
//relation operator (= =)as non-member
bool operator==(comp&a,comp&b)
{
    cout<<"Overloading operator==..\n";
    return a.getReal()==b.getReal()&&a.getImag()==b.getImag();
}

int main()
{
    comp c1;
    comp c2(20.1);
    comp c3(2.3,10.6);
    comp c4=c3;

    c1=++c2;
    c2.print();
    c1=c2++;
    c2.print();

    c1+=c3;
    c1.print();

    c4=c1+c2;
    c4.print();
    c4=3.5+c1;
    c4.print();
    c4=c1+5.0;
    c4.print();
    if(operator==(c3,c4))
        cout<<"Two object is equal\n";
    else
        cout<<"Two object is not equal\n";
    return 0;
}
