#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
unsigned int flip()
{
    unsigned int res;
    //srand(static_cast<unsigned int>(time(0)));
    res=rand()%2;
    //cout<<res<<" \n";
    return res;
}
int main()
{
    int a,i,n,count1=0,count2=0;
    srand(static_cast<unsigned int>(time(0)));
    cout<<"n=";
    cin>>n;
    for(i=0;i<n;i++){
        a=flip();
        if(a) ++count1;
        else ++count2;
    }
    cout<<"���泯�ϵĴ���Ϊ"<<count1<<"\n���泯�ϵĴ���Ϊ"<<count2;
}
