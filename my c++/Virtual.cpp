///****************************************************
///�麯�������ã���ֹ��μ̳�
///****************************************************

#include<iostream>

using namespace std;

class Furniture
{
public:
    Furniture(int w=0):weight(w)    {cout<<"weight1="<<weight<<endl;}   ///����
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
///SleepSofa(int weight):Bed(weight),Sofa(weight){}  ���󡣷�������Class Bed����"Class Sofa"����̳�"Class Furniturn"
///����SleepSofa����ͨ��Bed or Sofa���̳�weight
    SleepSofa(int weight):Furniture(weight){}
};

int main()
{
    SleepSofa ss(10);
    cout<<"weight4="<<ss.weight<<endl;
}
