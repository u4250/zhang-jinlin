#include <iostream>

using namespace std;

int main()
{
    int i,sum=1;
    for(i=1;i<=15;i=i+2){
//    	cout<<i<<("\n");
      sum*=i;
    }
    cout<<("1到15中的奇数乘积是")<<sum;
}
