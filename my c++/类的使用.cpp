///�����ⶨ���Ա����ͨ�������ڽ�������, Ȼ��������ͨ������������� :: ����ʵ��
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
    point m;///�ö���õ��ഴ��һ������  ��m
    m.setpoint(100,201);///���� .m��x,y
    m.printpoint();///��� .m��x,y
}
