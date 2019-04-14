#include <iostream>
using namespace std;
int f(int a)
{
    int i;
    for(i=2;i<=(a/2);i++)
        if(a%i==0) 
    	return 0;
    	return 1;
}

int main()
{
	int x,k;
	for(x=2;x<10001;x++){
	if(f(x)) {
		cout<<x<<"是\n";
		k++;
	}
	} 
		cout<<"10000以内的素数共有"<<k<<"个"; 
}
