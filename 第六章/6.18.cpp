#include <iostream>
using namespace std;
int integerPower(int base,int exponent)
{
    int result=1,i;
    for(i=1;i<=exponent;i++){
        result*=base;
    }
    return result;
}
int main()
{
    int x,y,result;
    cout<<"���������x��ָ��y\n";
    cin>>x>>y;
    result=integerPower(x,y);
    cout<<result;

}

