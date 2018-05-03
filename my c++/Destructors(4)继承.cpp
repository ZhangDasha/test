///*********************************************************************************************
///当“SleepSofa SS(10);”时运行到"Class Bed"后转到“Class Furniture”,此后又装到“Class Bed”;
///当运行到“Class Sofa”时同理。
///*********************************************************************************************

#include<iostream>

using namespace std;

class Furniture
{
public:
    Furniture(int w):weight(w){cout<<"weight1="<<weight<<endl;}
    int weight;
};

class Bed:public Furniture
{
public:
    Bed(int w):Furniture(w)
    {
      cout<<"weight2="<<weight<<endl;
    }

    void sleep()
    {
        cout<<"sleep"<<endl;
    }
};

class Sofa:public Furniture
{
    public:
    Sofa(int w):Furniture(w)
    {cout<<"weight3="<<weight<<endl;}
    void wathTV()
    {
        cout<<"watchTV"<<endl;
    }
};

class SleepSofa:public Bed,public Sofa
{
    public:
    SleepSofa(int w):Bed(w),Sofa(w){}
    void foldOut()
    {
        cout<<"Fold out"<<endl;
    }
};

int main()
{
    SleepSofa SS(10);
}
