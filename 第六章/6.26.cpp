#include <iostream>
#include <cmath>
using namespace std;
double celsius(double f)
{
    double c;
    c=(f-32)/1.8;
    return c;
}
double fahrenheit(double c)
{
    double f;
    f=32+c*1.8;
    return f;
}

int main()
{
    double x;
    int a;
    cout<<"请输入温度\n";
    cin>>x;
    cout<<"0.华氏温度转摄氏温度\n";
    cout<<"1.摄氏温度转华氏温度\n";
    cin>>a;
    if(a){
        cout<<"该温度对应的华氏温度为"<<fahrenheit(x)<<"F";
    }
    else
        cout<<"该温度对应的摄氏温度为"<<celsius(x)<<"℃";
}
