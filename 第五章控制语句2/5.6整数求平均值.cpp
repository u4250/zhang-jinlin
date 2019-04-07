#include <iostream>
using namespace std;
int main()
{
    int i=1,a;
    double sum=0.0;
    cout<<("开始输入需要求和的数字：");
    for(i=1;a!=9999;i++){
        cin>>a;
        if(a!=9999){
        sum=sum+a;
        } 
        else sum=sum/(i-1),cout<<("平均值为：")<<sum;
    }
} 
