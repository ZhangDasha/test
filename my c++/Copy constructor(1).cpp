#include<iostream>
using namespace std;

class Date
{
public:
    Date(int=1,int=1,int=2000);
    Date(const Date&);
    void print()const;
private:
    int day,month,year;
};

Date::Date(int d,int m,int y):day(d),month(m),year(y)
{
    cout<<day<<'/'<<month<<'/'<<year<<"sss"<<endl;
}

///**************************************************************************
Date::Date(const Date&date)
{
    day=date.day;
    month=date.month;
    year=date.year;                               ///copy construction
    cout<<day<<'/'<<month<<'/'<<year<<"hhhh"<<endl;
}
///****************************************************************************

void Date::print()const
{
    cout<<day<<'/'<<month<<'/'<<year<<endl;
}


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Date f(Date d)            ///Ìæ´ú
{
    cout<<"This is a sub-function..\n";
    d.print();
    return d;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


int main()
{
    Date day1(7,8,2000);
    Date day2=day1;     ///copy construction (1)
    Date day3(day1);    ///copy construction (2)
    day1.print();
    //day2.print();

    cout<<"********************************"<<endl;
    day3=f(day2);                                  ///???
    cout<<"********************************"<<endl;
    cout<<"Entering the main function \n";

    return 0;
}
