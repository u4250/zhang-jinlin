#include <iostream>
#include <cmath>
using namespace std;
double f(double a,double b,double c)
{
    double small;
    if(a<b&&a<c) small=a;
    else if(b<a&&b<c) small=b;
    else small=c;

    return small;

}

int main()
{
    double x,y,z;
    cin>>x>>y>>z;
    cout<<f(x,y,z);
}
