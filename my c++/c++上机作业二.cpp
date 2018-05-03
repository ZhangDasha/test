#include<iostream>
#include<string.h>

using namespace std;

class student
{
private:
    int sNo;
    static int count;
    char sName[10];
    double sScore;
    static double grade;
public:
    student(int=0,char=' ',double=0.0);

    student(int x,char y[],double z)
    {
        sNo=x;strcpy(sName,y);sScore=z;
        grade+=sScore;
        count++;
        //cout<<"student"<<count<<"constract\n";
    }
    void display()
    {
        cout<<"No:"<<sNo<<endl;
        cout<<"Name:"<<sName<<endl;
        cout<<"Score:"<<sScore<<endl;
    }
    int getScore()
    {
        return sScore;
    }
    static void ave()
    {
        cout<<"average:"<<grade/count<<endl;
    }
};


int student::count=0;
double student::grade=0.0;
int main()
{
	student std1(1,"张三",99);
	cout<<std1.getScore()<<endl;
	cout<<"************************\n";

	student std2(2,"李四",98);
	cout<<std2.getScore()<<endl;
	cout<<"************************\n";

	student std3(3,"王五",99);
	cout<<std3.getScore()<<endl;
	cout<<"************************\n";

	std1.display();
	cout<<"************************\n";
	std2.display();
	cout<<"************************\n";
	std3.display();
	cout<<"************************\n";
	student::ave();
}

