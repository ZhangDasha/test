#include<iostream>

#include<string.h>

using namespace std;

void compete(char *Q)//�����ж�С���������û��0�еĻ���0ȫ�����������ұ��������㴦����С�����Լ��Ժ�������С���㿪ʼ���󶼽ص���
               //�����������֣�
{
    char *p;

    int n = strlen(Q);//��ȡָ����ָ���ַ�������ĳ���

    p = Q + n - 1;//�����β����ʼ

    if (strchr(Q, '.'))//���ҡ�.����һ�γ��ֵ�λ�ã�����ǵ�һλҲ����0�±����λ�ã���ô����ѭ��������ֱ�Ӹ�ֵΪ��\0��

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

    char A[101000], B[101000];//��Ϊλ��һ�㶼ͦ��ģ�������double���͵����Կ���ô���㶮��

    while (cin >> A >> B)

    {
        pa = A;
        pb = B;
        compete(pa);//����ǰ��ĺ���
        compete(pb);

        while (*pa == '0') pa++;//���±�0��ʼ�жϣ����p[0]��0�Ļ������ƶ�ֱ����0

        while (*pb == '0') pb++;

        if (strcmp(pa, pb) == 0)//����ж��������ֵ�pA,pB��������λ���Ƿ���Ⱦ�OK�ˣ���

            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;

}
