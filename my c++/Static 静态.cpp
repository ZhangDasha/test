#include <iostream>

using namespace std;

class student
{
public:
    student();
    void print() const;
    static int getCount();
private:
    static int count;
    int studentNo;
};
///**********************************************************

int student::count=0;   ///类外定义静态成员

///**********************************************************

student::student()
{
    count++;
    studentNo=count;
}

void student::print()const
{
    cout<<"student="<<studentNo<<"count="<<count<<endl;
}

int student::getCount()
{
    return count;
}

int main()
{
    student st1;
    st1.print();
    cout<<"***************"<<endl;
    student st2;
    st1.print();
    st2.print();
    cout<<"******************\n";
    cout<<"student's number is "<<student::getCount()<<endl;
}
