#include<iostream>

using namespace std;

void sort(int a[])
{
    int i,j,temp;
    for(i=0;i<5;i++)
       for(j=4;j>i;j--)
       {
           if(a[i]<a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
    cout<<"The sort:";
    for(i=0;i<5;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"The max :";
    cout<<a[0]<<endl;
}

int main()
{
    int m;
    int b[5];
    int (&c)[5]=b;  ///关于数组的引用
    cout<<"Input five int number"<<endl;
    for(m=0;m<5;m++)
        cin>>b[m];
    sort(c);


    return 0;
}
