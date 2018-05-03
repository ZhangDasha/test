#include<iostream>

using namespace std;

class Bed
{
public:
    Bed(int w):weight(w)
    {
        cout<<"Constructing Bed...and weight is :"<<weight<<endl;
    }
    void sleep()
    {
        cout<<"to sleep"<<endl;
    }
    int weight;
};

class Sofa
{
public:
    Sofa(int w):weight(w)
    {
        cout<<"Constructor ...and weight is:"<<weight<<endl;
    }
    void watchTV()
    {
        cout<<"to watchTV"<<endl;
    }
    int weight;
};

class SleeperSofa:public Bed,public Sofa
{
public:
    SleeperSofa(int w):Bed(w),Sofa(w)
    {
        cout<<"Construct SleeperSofa.."<<endl;
       /// cout<<"The weight is "<<weight<<endl;
    }
    void foldOut()
    {
        cout<<"Fold out"<<endl;
    }
   /// int weight;
};

int main()
{
    SleeperSofa ss(2);
    ss.foldOut();
    ss.sleep();
    ss.watchTV();
}
