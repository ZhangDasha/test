///引用及是给其起别名


///*&指针引用名=指针

///数组的引用：（&数组引用名）[数组长度]=数组

///列：在指针*a中  a表示指针的地址，输出的是该指针地址，*a表示指针的内容。
#include<iostream>

using namespace std;

int main(void)
{
    int a=10;
    int *p=&a;   ///将a的地址赋值给指针p;注：&（取地址符）
    int *&q=p;    ///
    *q=20;
    cout<<a<<" "<<*p<<" "<<p<<" "<<q<<endl;
}
