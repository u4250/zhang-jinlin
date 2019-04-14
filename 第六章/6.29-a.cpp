#include <iostream>
using namespace std;
int f(int a)
{
    int i,k=1;
    for(i=2;i<=a;i++)
    {
        if(a/i==0) k=1;
    }
    return k;
}

int main()
{
    int x;
    cin>>x;
    if(f(x)) cout<<"ÊÇ";
    else
	cout<<"²»ÊÇ";
}
