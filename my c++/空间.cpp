#include<iostream>
using namespace std;

class Date
{
public:
    Date();
    Date(int,int,int);
    int getDay()const;
    int getMonth()const;
    int getYear()const;
private:
    int day,month,year;
};

Date::Date()
{
    day=1;month=3;year=2015;
    //cout<<"The day/month/year is"<<day<<'/'<<month<<'/'<<year<<'/'<<endl;
    cout<<"hahha\n";
}
Date::Date(int d,int m,int y)
{
    day=d;month=m;year=y;
    cout<<"The day/month/year is"<<day<<'/'<<month<<'/'<<year<<'/'<<endl;
}

int Date::getDay()const
{
    return day;
}
int Date::getMonth()const
{
    return month;
}
int Date::getYear()const
{
    return year;
}


int main()
{
    Date day;                ///������Ϊday�Ŀն���
    Date today(18,2,2015);   ///������Ϊtoday�Ķ��󣬲�������и�ֵ��
    Date *dPtr;
    dPtr=&day;

    Date *dPtr1=new Date;    ///����һ���µĿյĿռ�
    Date *dPtr2=new Date(12,2,2015);   ///����һ���¿ռ�

    cout<<dPtr->getDay()<<'/'<<dPtr->getMonth()<<'/'<<dPtr->getYear()<<endl;      ///ָ�����
    cout<<dPtr1->getDay()<<'/'<<dPtr1->getMonth()<<'/'<<dPtr1->getYear()<<endl;
    cout<<dPtr2->getDay()<<'/'<<dPtr2->getMonth()<<'/'<<dPtr2->getYear()<<endl;

    delete dPtr1;
    delete dPtr2;
}
