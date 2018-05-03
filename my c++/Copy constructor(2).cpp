#include<string.h>

#include<iostream>

using namespace std;

class Date
{
public:
    Date(int,int,int,char*);
    Date(const Date&);
    void print()const;
private:
    int day,month,year;
    char *name;
};

Date::Date(int d,int m,int y,char*nstr):day(d),month(m),year(y)
{
    name=new char[strlen(nstr)+1];
    strcpy(name,nstr);

    cout<<name<<"is construction...\n";
}

Date::Date(const Date&date)
{
    day=date.day;
    month=date.month;
    year=date.year;


    if(date.name != NULL)
    {
        name=new char[strlen(date.name)+1];
        strcpy(name,date.name);
    }
    else
        name=NULL;
    cout<<"constructing a copy object...\n";
}

void Date::print()const
{
    cout<<day<<'/'<<month<<'/'<<year<<endl;
}

void f(Date d)    ///Date f(Date d)
{
    cout<<"This is sub-function..\n";
    d.print();
    ///return d;
}

int main()
{
    Date day1(7,8,2016,"day1");
    Date day2=day1;
    Date day3(12,5,2000,"day3");

    day1.print();
    //day2.print();

    cout<<"***********************************"<<endl;
    f(day2);
    cout<<"***********************************\n";

    cout<<"Entering the main function\n";
    return 0;

}
