#include <iostream>
#define PI 3.1415926
using namespace std;
inline double circleArea(double r)
{
    return r*r*PI;
}

int main()
{
    double x;
    cout<<"Բ�İ뾶��";
    cin>>x;
    if (x>0) cout<<"��Բ�����Ϊ��"<< circleArea(x);
    else cout<<"��������";
}

