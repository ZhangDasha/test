///在类外定义成员函数通过在类内进行声明, 然后在类外通过作用域操作符 :: 进行实现
///*****************************************************************************


#include<iostream>

using namespace std;

class point
{
public:
    void setpoint(int x,int y);
    void printpoint();
private:

        int xpos;
        int ypos;

};

void point::setpoint(int x,int y)
{
    xpos=x;
    ypos=y;
}

void point::printpoint()
{
    cout<<"x="<<xpos<<endl;
    cout<<"y="<<ypos<<endl;
}

int main()
{
    point m;///用定义好的类创建一个对象  点m
    m.setpoint(100,201);///设置 .m的x,y
    m.printpoint();///输出 .m的x,y
}
