#include <iostream>

using namespace std;

class Shape
{
public:
    Shape(){}
    virtual int volume()
    {
        cout<<"Virtual function of base class"<<endl;
        return 0;
    }
    virtual void print()
    {
        cout<<"This is a common shape\n";
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
        cout<<"The volume of the cube is:";
        return length*length*length;
    }
    virtual void print()
    {
        cout<<"This is a Cube shape\n";
    }
};

class Cuboid:public Shape
{
public:
    int length;
    int weight;
    int height;
    Cuboid(int l,int w,int h)
    {
        length=l;
        weight=w;
        height=h;
    }
    virtual int volume()
    {
        cout<<"The volume of the cuboid is";
        return length*weight*height;
    }
        virtual void print()
    {
        cout<<"This is a Cuboid shape\n";
    }
};

class Sphere:public Shape
{
public:
    int radius;
    Sphere(int r)
    {
        radius=r;
    }
    virtual int volume()
    {
        cout<<"The volume of the sphere is";
        return radius*radius*radius*3.14*3/4;  ///返回值表达式中不能含有括号
    }
     virtual void print()
     {
         cout<<"This is radius shape\n";
     }
};

void fn(Shape*s)
{
    s->print();
    cout<<s->volume()<<endl;
}

int main()
{
    Cude c1(10);
    Cuboid c2(10,11,12);
    Sphere sp(10);
    fn(&c1);
    fn(&c2);
    fn(&sp);
    return 0;
}
