#include<iostream>
using namespace std;

class Shape
{
public:
    static int number;
    double xCoord,yCoord;
    Shape(double x,double y):xCoord(x),yCoord(y)
    {
        cout<<"Shape's constructor"<<endl;
    }
    virtual double Area()const
    {
        cout<<"Shape's area is";
        return 0.0;
    }
    ~Shape()
    {
        cout<<"Shape's destructor"<<endl;
    }
};


class Circle:public Shape
{
public:
    Circle(double x,double y):Shape(x,y)
    {
        cout<<"Circle's constructor"<<endl;
        number++;
    }
    virtual double Area()const
    {
        cout<<"Circle's area is";
        return 3.14*xCoord*xCoord;
    }
    ~Circle()
    {
        cout<<"Circle's destructor "<<endl;
    }
};

class Rectangle:public Shape
{
    public:
    Rectangle(double x,double y):Shape(x,y)
    {
        cout<<"Rectangle's constructor"<<endl;
        number++;
    }
    virtual double Area()const
    {
        cout<<"Rectangle's area is";
        return xCoord*yCoord;
    }
    ~Rectangle()
    {
        cout<<"Rectangl's destructor "<<endl;
    }
};

void fun(const Shape &sp)
{
    cout<<sp.Area()<<endl;
}

int Shape::number=0;

int main()
{
    Circle c(2.0,5.0);
    Rectangle  r(2.0,4.0);
    fun (c);
    fun (r);
    cout<<c.number<<endl;
    cout<<r.number<<endl;
    return 0;
}
