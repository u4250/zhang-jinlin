#include <iostream>
using namespace std;
double qyalityPoints(double grade)
{
    if(grade>89&&grade<101) cout<<"4";
    else if(grade>79&&grade<90) cout<<"3";
    else if(grade>69&&grade<80) cout<<"2";
    else if(grade>59&&grade<70) cout<<"1";
    else cout<<"0";

}

int main()
{
    int x;
    cout<<"������һ���ɼ���";
    cin>>x;
    qyalityPoints(x);
}
