#include <iostream>

using namespace std;

int main()
{
    int i,n,num,min;
    cout<<("������������ݵĸ�����");
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<("�������")<<i<<("�����ݣ�");
        cin>>num;
        if(num<min) min=num;
    }
    cout<<("������������Сֵ��")<<min;
}

