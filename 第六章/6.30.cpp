#include <iostream>
using namespace std;
void f(int a)
{
    while(a/10!=0){
            cout<<a%10;
            a=a/10;
    }
    cout<<a;
}

int main()
{
    int x;
    cout<<"������һ��������";
    cin>>x;
    f(x);
}
