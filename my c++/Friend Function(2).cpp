#include<iostream>

using namespace std;

class A;     ///������A


class B
{
public:
    void print(A& a);   ///������A�Ķ���   ��  ���ã�
};

class A
{
public:
    A():x(1),y(2){}
    friend void B::print(A& a);    ///��Ԫ
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
