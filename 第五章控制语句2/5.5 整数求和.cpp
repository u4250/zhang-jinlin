#include <iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0,a;
    cout<<("输入你要求几个数的和：");
    cin>>n;
      cout<<("开始输入需要求和的数字：");
    for(i=1;i<=n;i++){
        cin>>a;
        sum+=a;
    }
    cout<<("和为：")<<sum;
}
