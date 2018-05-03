#include<iostream>

using namespace std;

class Date
{
   public:
       Date(int,int,int);    ///constructor
       Date(const Date&);    ///copy constructor
       void addDate(int);
       void setDate(int,int,int);

       int getDay()const;
       int getMonth()const;
       int getYear()const;

       ~Date();
   private:
    int max(int,int);
    int min(int,int);
    bool IsRight(int,int,int);
    bool IsLeapYear(int);


    int day,month,year;
    static int dayOfMonth[13];    ///静态数组
};

int Date::dayOfMonth[]={0,31,28,31,30,31,31,30,31,30,31};    ///创建

Date::Date(int d,int m,int y)
{
    if(IsRight(d,m,y))
    {
        day=d;
        month=m;
        year=y;
    }
    else
    {
        year=max(1,y);

        month=max(1,m);
        month=min(month,12);

        dayOfMonth[2]=28+IsLeapYear(year);
        day=max(1,d);
        day=min(day,dayOfMonth[month]);
    }
}


Date::Date(const Date& d)
{
    day=d.day;
    month=d.month;
    year=d.year;
}

Date::~Date()
{
    cout<<"hhh\n";
}


void Date::setDate(int d,int m,int y)
{
    if(IsRight(d,m,y))
    {
        day=d;
        month=m;
        year=y;
    }
    else
    {
        year=max(1,y);

        month=max(1,m);
        month=min(month,12);

        dayOfMonth[2]=28+IsLeapYear(year);
        day=max(1,d);
        day=max(day,dayOfMonth[month]);
    }
}

//add a days

void Date::addDate(int n)
{
    while(1)
    {
        if(n+day>=dayOfMonth[month])
        {
            n=n+day-dayOfMonth[month];
            month++;
            if(month>12)
            {
                month=1;
                year++;
                dayOfMonth[2]=28+IsLeapYear(year);
            }
            day=0;
        }
        else break;
    }
    day=n;
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
//examine a valid date

bool Date::IsLeapYear(int y)
{
    return !(y%4)&&(y%100)||!(y%400);
}
//examine a valid date

bool Date::IsRight(int d,int m,int y)
{
    int maxDay;

    if((y>9999)||(y<1)||(d<1)||(m<1)||(m>12))
          return false;

          maxDay=31;
          switch(m)
          case(4):case(6):case(9):case(11):maxDay--;
          if(m==2)maxDay=IsLeapYear(y)?29:28;
          return (d>maxDay)?false:true;
}
int Date::max(int a,int b)
          {
              if(a>b)
                return a;
              return b;
          }
int Date::min(int a,int b)
{
    if(a<b)
        return a;
    return b;
}


int main()
{
    Date d(26,4,2010);
    cout<<d.getDay()<<'/'<<d.getMonth()<<'/'<<d.getYear()<<endl;

    d.setDate(45,45,1990);
    d.addDate(3);
    cout<<d.getDay()<<'-'<<d.getMonth()<<'-'<<d.getYear()<<endl;

    Date d1=d;
    d1.addDate(20);
    cout<<d1.getDay()<<'*'<<d1.getMonth()<<'*'<<d1.getYear()<<endl;

    return 0;
}
