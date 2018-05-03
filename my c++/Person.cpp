#include<iostream>
#include<string>
#include<string.h>
using namespace std;

class Date
{
public:
    Date(int y,int m,int d);
    Date(const Date& d);
    string getDate()const;
private:
    int year,month,day;
};

class Person
{
public:
    Person(string strN,string strA,string strP,string strEm);
    virtual string toString();
private:
    string name,address,phone,email;
};

class Student:public Person
{
public:
    Student(int st,string strN,string strA,string strP,string strEm);
    string toString();
private:
    int status;
};

class Employee:public Person
{
public:
    Employee(string strOf,double sal,Date date,string strN,string strA,string strP,string strEm);
    string toString();
private:
    string office;
    double salary;
    Date hiringDate;
};

class Faculty:public Employee
{
public:
    Faculty(int ohour,char r,string strOf,double sal,Date date,string strN,string strA,string strP,string strEm);
    string toString();
private:
    int officeHour;
    char rank;
};

class Staff:public Employee
{
public:
    Staff(string t,string strOff,double sal,Date date,string strN,string strA,string strP,string strEm);
    string toString();
private:
    string title();
};

Date::Date(int y,int m,int d)
{
    year=y;month=m;day=d;
}
Date::Date(const Date& d)
{
    year=d.year;
    month=d.month;
    day=d.day;
}
string Date::getDate()const
{
    string strDate();
    char temp[10];
    sprintf(temp,"%d-%d-%d",year,month,day);
    strDate=temp;
    rerturn strDate;
}
Person::Person(string strN,string strA,string strP,string strEm):name(strN),address(strA),phone(strP),email(strEm){}
string Person::toString()
{
    return "Name:"+name+";Address:"+address+";Phone:"+phone+";Email:"+email;
}

Student::Student(int st,string strN,string strA,string strP,string strEm):Person(strN,strA,strP,strEm),status(st){}
string Student::toString()
{
    string tempStatus;
    switch(status)
    {
    case 1:
        tempStatus="Freshman";
        break;
    case 2:
        tempStatus="sophomore";
        break;
    case 3:
        tempStatus="Junior";
        break;
    default:
        tempStatus="Senior";
    }
    cout<<"Student Information\n";
    return Person::toString()+"I am"+tempStatus;
}


Employee::Employee(string strOf,double sal,Date date,string strN,string strA,string strP,string strEm):
                              Person(strN,strA,strP,strEm),office(strOf),salary(sal),hiringDate(date){}
string Employee::toString()
    {
       char ch[20];
       sprintf(ch,"Salary:%6.2f",salary);
       string temp=ch;
       return Person::toString()+temp+";Hiring date:"+hiringDate().getDate();
    }

Faculty::Faculty(int ohour,char r,string strOf,double sal,Date date,string strN,string strA,string strP,string strEm):
                    Employee(strOf,sal,date,strN,strA,strP,strEm),officeHour(ohour),rank(r){}

string Faculty::toString()
{
    char ch[20];
    sprintf(ch,";Office hour:%d",officeHour);
    string temp = ch;
    cout<<"Faculty Information\n";
    return Employee::toString()+ch+";Rank:"+rank;
}

Staff::Staff(string t,string strOff,double sal,Date date,string strN,string strA,string strP,string strEm):
                Employee(strOff,sal,date,strN,strA,strP,strEm),title(t) {}

string Staff::toString()
{
    cout<<"Staff Information\n";
    return Employee::toString()+";Title:"+title;
}

void text(Person& p)
{
    cout<<p.toString()<<endl;
}

int main()
{
    Date date(2015,05,23);

    Student st1(2,"LiMing","Shenliao Road,shenyang","18000000","1233@qq.com");
    text(st1);

    Faculty fa(20,'A',"210",9000.80,date,"Mary","shenliao Road shengyang","18000000","1233@qq.com");
    text(fa);

    Staff st("administrator","301",5800.00,date,"zheng","shenliao Road shenyang","13900000","1111@qq.com");
    text(st);
    return 0;
}
