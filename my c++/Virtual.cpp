///****************************************************
///虚函数的作用：防止多次继承
///****************************************************

#include<iostream>

using namespace std;

class Furniture
{
public:
    Furniture(int w=0):weight(w)    {cout<<"weight1="<<weight<<endl;}   ///区别
    int weight;
};

class Bed:virtual public Furniture
{
    public:
    Bed(){cout<<"weight2="<<weight<<endl;}
    void sleep()
    {
        cout<<"Sleep"<<endl;
    }
};

class Sofa:virtual public Furniture
{
    public:
    Sofa(){cout<<"weight3="<<weight<<endl;}
    void watchTV()
    {
        cout<<"watch TV"<<endl;
    }
};

class SleepSofa:public Bed,public Sofa
{
    public:
///SleepSofa(int weight):Bed(weight),Sofa(weight){}  错误。分析：“Class Bed”与"Class Sofa"均虚继承"Class Furniturn"
///所以SleepSofa不能通过Bed or Sofa简介继承weight
    SleepSofa(int weight):Furniture(weight){}
};

int main()
{
    SleepSofa ss(10);
    cout<<"weight4="<<ss.weight<<endl;
}
