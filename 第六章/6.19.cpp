#include <iostream>
#include <cmath>
using namespace std;
double hypotenuse(double a,double b)
{
    double c;
    c=sqrt((pow(a,2)+pow(b,2)));
    return c;
}
int main()
{
    double x,y,result;
    cout<<"输入两条直角边长\n";
    cin>>x>>y;
    result=hypotenuse(x,y);
    cout<<result;
}
