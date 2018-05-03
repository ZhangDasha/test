#include<iostream>

using namespace std;

class Date
{
public:
    Date();
    Date& setDate(int,int,int);
    int getYear() const;
private:
    int day,month,year;
};

Date::Date()
{
    day=1;month=1;year=2014;
}

Date& Date::setDate(int d,int m,int y)     ///'&'  此处是地址还是引用？？？
{
    day=d;
    month=m;
    year=y;
    return *this;       ///this作用是返回此成员函数中的值；
}

int Date::getYear()const
{
    return this->year;    ///This指向并返回year
}

int main()
{
    Date today;
    today.setDate(4,5,2015);   ///对Date中变量重新赋值
    cout<<today.getYear()<<endl;
    return 0;
}
