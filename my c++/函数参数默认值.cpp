///***************************************
///函数参数默认值必须在最右边；
///无实参则用默认值，否者实参覆盖默认值；
///***************************************
///函数重载：名称相同，参数可辩。当参数数量相同时，只需要对应参数类型不同即称为重载
///inline 内联函数

#include<iostream>

using namespace std;

/*inline */void fun(double x,double y);
/*inline*/ void fun(int x,int y,int z=10);


void fun(double x,double y)
{
    cout<<x<<" "<<y<<endl;
}

void fun(int x,int y,int z)
{
    cout<<x<<" "<<y<<" "<<z<<endl;
}


int main()
{
    fun(1,1);
    ///fun(1,1,1);
    fun(1.2,2.3);
    return 0;
}
