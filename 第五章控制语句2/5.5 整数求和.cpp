#include <iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0,a;
    cout<<("������Ҫ�󼸸����ĺͣ�");
    cin>>n;
      cout<<("��ʼ������Ҫ��͵����֣�");
    for(i=1;i<=n;i++){
        cin>>a;
        sum+=a;
    }
    cout<<("��Ϊ��")<<sum;
}
