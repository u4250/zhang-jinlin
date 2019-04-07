#include <iostream>
#include<cmath>
using namespace std;  //e^x=1+x/1!+....+x^n/n!
int main()
{
    int i=1,n,x;
    double result=1.0,e=1.0,a=0.0;  //用a表示x^n/n!，e表示e^x 
    cout<<("请输入精度n=");
    cin>>n;
    cout<<("请输入x=");
    cin>>x;
    if(n<0) cout<<("输入错误");
    while(n){
        while(i<n){
            result*=i;
            a=pow(x,i)/result;
            e+=a;
//            cout<<a<<("--")<<result<<("--")<<e<<("\n");
            i++;
        }
        n--;
	}
    cout<<("e^x的值为：")<<e;
}


