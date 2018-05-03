#include<iostream>

using namespace std;

class Date
{
public:
    Date();
    ~Date();
    void print()const;
private:
    int day,month,year;
    static int count;    ///静态
};

int Date::count=0;

Date::Date()
{
    day=1;  month=3;  year=1010;
    cout<<"ArrayDate["<<count<<"]is constructed \n";
    count++;
}

Date::~Date()
{
    count--;
    cout<<"ArrayDate["<<count<<"]is destroyed \n";
}

void Date::print()const
{
    cout<<day<<'/'<<month<<'/'<<year<<endl;
}


int main()
{
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    Date arrayDate[4];               ///创建名为arrayDate的数组对象；

    Date *day1=new Date;                        ///Date 每创建一个对象都会调用到“构造”和“析构”函数

    Date *day2=new Date[4];         ///创建数组空间；
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    cout<<"**********************************************************\n";

    for(int i=0;i<4;i++)
    {
        cout<<"arrayDate["<<i<<"]'s date is::";                ///循环调用输出
         arrayDate[i].print();
        cout<<"point to array of day["<<i<<"] date is:";
         day2[i].print();
    }
    cout<<"*********************************************************\n";

    delete day1;
    delete []day2;
    return 0;
}
