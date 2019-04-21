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
    cout<<"圆的半径；";
    cin>>x;
    if (x>0) cout<<"该圆的面积为；"<< circleArea(x);
    else cout<<"输入有误";
}

