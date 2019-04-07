#include <iostream>
using namespace std;
int main()
{
	int a=1,i;
	double k=1.0,result=0.0;
	for(i=1;i<=1000;i++){
		result+=(4*k/a);
		k*=-1;
		a+=2;
		cout<<("π前")<<i<<("近似值是")<<result<<("\n");
	} 
}
