#include <iostream>
#include <cmath>
using namespace std;
int multiple(int a,int b)
{
    int k=0;
    if(b%a==0)
    k=1;
    return k;
}
int main()
{
    int x,y;
    cout<<"输入两个整数\n";
    cin>>x>>y;
    if (multiple(x,y)) cout<<"true";
    else cout<<"false";
}
