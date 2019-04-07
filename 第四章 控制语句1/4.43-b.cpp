#include <iostream>
using namespace std;
int main()
{
    int i=1,n;
    double result=1.0,e=1.0,a=0.0;
    cout<<("请输入你需要的精度");
    cin>>n;
    if(n<0) cout<<("输入错误");
    while(n){
        while(i<n){
            result*=i;
//          cout<<i<<("--")<<result<<("\n");
            a=1/result;
            e+=a;
            i++;
            }
            n--;

    }
    cout<<("e的值为：")<<e;
}

