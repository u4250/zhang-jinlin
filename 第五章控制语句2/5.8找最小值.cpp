#include <iostream>

using namespace std;

int main()
{
    int i,n,num,min;
    cout<<("请输入该组数据的个数：");
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<("请输入第")<<i<<("个数据：");
        cin>>num;
        if(num<min) min=num;
    }
    cout<<("该组数据中最小值是")<<min;
}

