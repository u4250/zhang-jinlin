#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,max1,min1;
    cout <<"请输入5个整数:";
    cin >>a>>b>>c>>d>>e;
    if(a>b&&a>c&&a>d&&a>e)
    max1=a;
    if(b>a&&b>c&&b>d&&b>e)
    max1=b;
    if(c>b&&c>b&&c>d&&c>e)
    max1=c;
    if(d>b&&d>c&&d>a&&d>e)
    max1=d;
    if(e>b&&e>c&&e>d&&e>a)
    max1=e;
    if(a<b&&a<c&&a<d&&a<e)
    min1=a;
    if(b<a&&b<c&&b<d&&b<e)
    min1=b;
    if(c<b&&c<a&&c<d&&c<e)
    min1=c;
    if(d<a&&d<b&&d<c&&d<e)
    min1=d;
    if(e<b&&e<c&&e<d&&e<a)
    min1=e;
    cout<<"Largest is"<<max1<<"\n";
    cout<<"Smallest is"<<min1<<"\n";



}

