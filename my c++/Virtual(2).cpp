///************************************************************
///继承完成后，才开始逆向析构
///************************************************************

#include<iostream>

using namespace std;

class Furniture
{
public:
    int weight;
///public:
    Furniture(int w):weight(w)
    {
        cout<<"Furniture's constructor is called weight1="<<weight<<endl;
    }
    ~Furniture()
    {
        cout<<"Furniture's destructor is called"<<endl;
    }
};

class Bed:virtual public Furniture
{
public:
    Bed(int w):Furniture(w)
    {
        cout<<"Bed's constructor is called weight2="<<weight<<endl;
    }
    ~Bed()
    {
        cout<<"Bed's destructor is called"<<endl;
    }
};

class Sofa:virtual public Furniture
{
public:
    Sofa(int w):Furniture(w)
    {
        cout<<"Sofa's constructor is called weight3="<<weight<<endl;
    }
    ~Sofa()
    {
        cout<<"Sofa's destructor is called "<<endl;
    }
};

class SleepSofa:public Bed,public Sofa
{
    bool fold;
public:
    ///*******************************************************
    SleepSofa(int w,bool f):Furniture(w),Bed(w),Sofa(w),fold(f)
    ///*******************************************************
    {
        cout<<"SleepSofa's constructor is called weight4="<<weight<<endl;
    }
    ~SleepSofa()
    {
        cout<<"SleepSofa's destructor is called"<<endl;
    }
};

int main()
{
    SleepSofa SS(10,"ture");
    return 0;
}
