#include <iostream>
using namespace std;
main( )
{
	unsigned int count;
	for(count=1;count<=5;++count){
		if(count!=5)
			cout<<count<<" ";
			else cout<<"\nBroke out of loop at count="<<count<<endl;	
	}
//	cout<<"\nBroke out of loop at count="<<count<<endl;
 } 
