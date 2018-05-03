#include<iostream>

using namespace std;

class Date
{
public:
    Date(int,int,int);
    void print()const;
    friend void add_year(Date&,int);
private:
    int day,month,year;
};

Date::Date(int d,int m,int y):day(d),month(m),year(y){}


void Date::print()const
{
    cout<<day<<'/'<<month<<'/'<<year<<endl;
}

void add_year(Date&date,int n)
{
    date.year+=n;
}


int main()
{
    Date today(11,22,2122);
    today.print();
    /*void */add_year(today,5);
    today.print();
    return 0;
}
