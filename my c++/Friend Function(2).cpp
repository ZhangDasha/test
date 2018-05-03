#include<iostream>

using namespace std;

class A;     ///申明类A


class B
{
public:
    void print(A& a);   ///创建类A的对象   或  引用？
};

class A
{
public:
    A():x(1),y(2){}
    friend void B::print(A& a);    ///友元
private:
    int x,y;

};



void B::print(A& a)
{
    cout<<"x is "<<a.x<<endl;
    cout<<"y is "<<a.y<<endl;
}

int main()
{
    A aObj;
    B bObj;
    bObj.print(aObj);
    return 0;
}
