#include <iostream>
#include<cmath>
using namespace std;  //e^x=1+x/1!+....+x^n/n!
int main()
{
    int i=1,n,x;
    double result=1.0,e=1.0,a=0.0;  //��a��ʾx^n/n!��e��ʾe^x 
    cout<<("�����뾫��n=");
    cin>>n;
    cout<<("������x=");
    cin>>x;
    if(n<0) cout<<("�������");
    while(n){
        while(i<n){
            result*=i;
            a=pow(x,i)/result;
            e+=a;
//            cout<<a<<("--")<<result<<("--")<<e<<("\n");
            i++;
        }
        n--;
	}
    cout<<("e^x��ֵΪ��")<<e;
}


