#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
	int i,j=1,b;
	array<int,20>a={};
	for(i=0;i<a.size();i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(i=0;i<a.size();i++){
		if(a[i+1]!=a[i]) cout<<a[i]<<" ";
	}
}
