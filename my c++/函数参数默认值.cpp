///***************************************
///��������Ĭ��ֵ���������ұߣ�
///��ʵ������Ĭ��ֵ������ʵ�θ���Ĭ��ֵ��
///***************************************
///�������أ�������ͬ�������ɱ硣������������ͬʱ��ֻ��Ҫ��Ӧ�������Ͳ�ͬ����Ϊ����
///inline ��������

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
