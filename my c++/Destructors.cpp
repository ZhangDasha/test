#include<iostream>
#include<string>

using namespace std;

class Date
{
protected:
    int day;
    int month;
    int year;
public:
    Date(int d=1,int m=1,int y=210):day(d),month(m),year(y)///���ٸ�ֵ
    {
        cout<<"Date's constructor is called"<<endl;

    }
    ~Date()
    {
        cout<<"This is a destructor "<<endl;
    }
};

class Employee
{
protected:

    string name;
protected:
    Employee():name("noname")
    {
        cout<<"Employee's default(δ����) constructor : Employee's name is :"<<name<<endl;
    }
    Employee(string na):name(na)
    {
        cout<<"Employee's constructor. Employee's name is"<<name<<endl;
    }
    ~Employee()
    {
        cout<<"This is destructor "<<endl;
    }
};

class Manager:public Employee  ///�̳�
{
protected:

    Date hiringdate;  ///Date object
    int level;
public:
    Manager()
    {
        cout<<"Manager's default is called"<<endl;
    }
    Manager(string na,int d, int m,int y,short lvl):Employee(na),hiringdate(d,m,y),level(lvl)
    {
        cout<<"Manager's constructor is called"<<endl;
    }
    ~Manager()
    {
        cout<<"Manager's destructor is called"<<endl;
    }

};

int main()
{
    Manager noname;
    Manager Jack("Jack",12,23,1991,10);
    return 0;
}
