#include<iostream>

#include<string.h>

using namespace std;

void compete(char *Q)//消除判断小数点后面有没有0有的话把0全部消除，并且保留到非零处，若小数点以及以后都是零则小数点开始往后都截掉，
               //保留整数部分，
{
    char *p;

    int n = strlen(Q);//获取指针所指向字符串数组的长度

    p = Q + n - 1;//数组从尾部开始

    if (strchr(Q, '.'))//查找’.‘第一次出现的位置，如果是第一位也就是0下标这个位置，那么下面循环不做，直接赋值为‘\0’

    while (*p == '0')

    {
        *p = '\0';
        p--;
    }

    if (*p == '.')

    {
        *p = '\0';
    }
}

int main()

{
    char *pa, *pb;

    char A[101000], B[101000];//因为位数一般都挺大的，超过了double类型的所以开这么大你懂的

    while (cin >> A >> B)

    {
        pa = A;
        pb = B;
        compete(pa);//调用前面的函数
        compete(pb);

        while (*pa == '0') pa++;//从下标0开始判断，如果p[0]是0的话往后移动直到非0

        while (*pb == '0') pb++;

        if (strcmp(pa, pb) == 0)//最后判断整数部分的pA,pB两个数的位数是否相等就OK了！。

            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;

}
