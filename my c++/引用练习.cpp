#include<iostream>
using namespace std;
int main()
{
    int iOne;
    int &i=iOne;
    iOne=5;
    cout<<"iOne="<<iOne<<endl;
    cout<<"i="<<i<<endl;

    cout<<"&iOne="<<&iOne<<endl;
    cout<<"&i="<<&i<<endl;

    int iTwo=8;
    i=iTwo;

    cout<<"iOne="<<iOne<<endl;
    cout<<"iTwo="<<iTwo<<endl;
    cout<<"i="<<i<<endl;

    cout<<"&iOne="<<&iOne<<endl;
    cout<<"&iTwo="<<&iTwo<<endl;
    cout<<"&i="<<&i<<endl;

    return 0;
}
