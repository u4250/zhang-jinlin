#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "please input two integers." << endl;
    cin >>a>>b;
    if (a!=b)
    {
    if (a>b)
        cout<<a<<"is large."<<endl;
    if (a<b)
        cout<<b<<" is large."<<endl;
    }
    else
        cout<<"these numbers are equal."<<endl;
    return 0;
}

