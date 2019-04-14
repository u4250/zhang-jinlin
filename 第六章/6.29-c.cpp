#include <iostream>
#include <cmath>
using namespace std;
int f(int a)
{
    int i;
    for(i=2;i<=(sqrt(a));i++)
        if(a%i==0) 
    	return 1;
    	return 0;
}
int main()
{
    int x;
    cin>>x;
    if(f(x)) cout<<"²»ÊÇ";
    else
	cout<<"ÊÇ";
}
