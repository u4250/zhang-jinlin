#include <iostream>
using namespace std;
int main()
{
    int i=1,n,result=1;
    cout<<("������һ���Ǹ�����");
    cin>>n;
    if(n<0) cout<<("�������");
    while(i<=n){
        result*=i;
        i++;
    }
    cout<<("n�Ľ׳�Ϊ��")<<result;
}
