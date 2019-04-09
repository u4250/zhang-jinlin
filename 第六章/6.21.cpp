#include <iostream>
#include <cmath>
using namespace std;
int iseven(int a)
{
    int k=0;
    if(a%2==0)
    k=1;
    return k;
}
int main()
{
    int i,x;
    for(i=1;;i++){
        cin>>x;
        if (iseven(x)) cout<<x<<" "<<"true\n";
        else cout<<x<<" "<<"false\n";
    }
}
