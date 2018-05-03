#include<iostream>
#include<string>

using namespace std;

class Employee
{
private:
    string firstName;
    string familyName;
    short department;
public:
    Employee(string fistname,string familyname,short depart)
    {
        firstName=fistname;
        familyName=familyname;
        department=depart;
    }
    void print()const
    {
        cout<<"name is "<<full_name()<<endl;
        cout<<"department:"<<department<<endl;
    }
    string full_name()const
    {
        return firstName+" "+familyName;
    }
};

class Manager:public Employee
{
    short level;
public:
    Manager(string firstname,string familyname,short depart,short lvl):
        Employee(firstname,familyname,depart)
        {
            level=lvl;
        }
        void  print() const
        {
            Employee::print();
            cout<<level<<endl;
        }

};

int main()
{
    Employee Tom("Tom","Felton",12);
    Manager Jack("Jack","Sparrow",15,11);
    Tom.print();
    Jack.print();
    return 0;
}
