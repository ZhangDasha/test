///***************************************************
///virtual中配合指针更好
///***************************************************

#include<iostream>

using namespace std;

class Shape
{
public:
    Shape(){}
    virtual int volume()
    {
        cout<<"Virtual function of the base class"<<endl;
        return 0;
    }
};

class Cude:public Shape
{
public:

    int length;
    Cude(int l)
    {
        length=l;
    }
    virtual int volume()
    {
        cout<<"The volume of the cube is ";
        return length*length*length;
    }
};

class Cuboid:public Shape
{
    int length;
    int weight;
    int height;
public:
    Cuboid(int l,int w,int h)
    {
        length=l;
        weight=w;
        height=h;
    }
    virtual int volume()
    {
        cout<<"The volume of the cuboid is ";
        return length*weight*height;
    }
};

void fn(Shape*s)
{
    cout<<s->volume()<<endl;
}

int main()
{
    Cude c1(10);
    Cuboid c2(15,16,20);
    fn(&c1);  ///始终调用Cude中的volume
    fn(&c2);  ///指针始终调用子类中的volume，如果子类没有才调用基类的
    return 0;
}


///***************************************************************************************************************

/*
#include <iostream>

using namespace std;

class Shape
{
public:
    Shape(){}
    virtual void volume()
    {
        cout<<"Virtual function of the base class"<<endl;
        //return 0;
    }
};
class Cude:public Shape
{
public:

    int length;
    Cude(int l)
    {
        length=l;
    }
    virtual void volume()
    {
        cout<<"The volume of the cube is ="<<length*length*length<<endl;
    }
};

class Cuboid:public Shape
{
    int length;
    int weight;
    int height;
public:
    Cuboid(int l,int w,int h)
    {
        length=l;
        weight=w;
        height=h;
    }
    virtual void volume()
    {
        cout<<"The volume of the cuboid is ="<<length*weight*height<<endl;
    }
};

int main()
{
    Cude c1(10);
    Cuboid c2(11,12,13);
    Shape*p;
    p = &c1;
    p->volume();
    p=&c2;
    p->volume();
    return 0;
}
*/
