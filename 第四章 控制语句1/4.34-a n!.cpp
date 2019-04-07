#include <iostream>
using namespace std;
int main()
{
    int i=1,n,result=1;
    cout<<("请输入一个非负整数");
    cin>>n;
    if(n<0) cout<<("输入错误");
    while(i<=n){
        result*=i;
        i++;
    }
    cout<<("n的阶乘为：")<<result;
}
