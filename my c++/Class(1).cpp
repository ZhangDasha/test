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

Date& Date::setDate(int d,int m,int y)     ///'&'  �˴��ǵ�ַ�������ã�����
{
    day=d;
    month=m;
    year=y;
    return *this;       ///this�����Ƿ��ش˳�Ա�����е�ֵ��
}

int Date::getYear()const
{
    return this->year;    ///Thisָ�򲢷���year
}

int main()
{
    Date today;
    today.setDate(4,5,2015);   ///��Date�б������¸�ֵ
    cout<<today.getYear()<<endl;
    return 0;
}
