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
    cout<<"�������¶�\n";
    cin>>x;
    cout<<"0.�����¶�ת�����¶�\n";
    cout<<"1.�����¶�ת�����¶�\n";
    cin>>a;
    if(a){
        cout<<"���¶ȶ�Ӧ�Ļ����¶�Ϊ"<<fahrenheit(x)<<"F";
    }
    else
        cout<<"���¶ȶ�Ӧ�������¶�Ϊ"<<celsius(x)<<"��";
}
