#include<stdio.h>
int main()
{
    int sum,n,i,k,a[55];
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        sum=0;k=0;  //sum����ĸţ����k��Сţ����ɴ�ĸţ������

        for(i=0;i<n;i++)
        {
            a[i]=k+1;
            if(i>=4)
            {
                a[i]+=a[i-3];k+=a[i-3];
   //��4�꿪ʼ��a[i-3]ֻСĸţ�����Ϊ��ĸţ����k���У�����a[i-3]ֻСĸţ����a[i]���С�
            }
            sum+=a[i];
        }
        printf("%d\n",sum);
    }
}
