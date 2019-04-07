#include <iostream>
#include <cmath> 
using namespace std;
main()
{
	double a,b,c;
	cin>>a>>b>>c;
	if(pow(c,2)==pow(a,2)+pow(b,2)||pow(a,2)==pow(c,2)+pow(b,2)||pow(b,2)==pow(a,2)+pow(c,2))
	cout<<("T");
	else cout<<("F"); 
 } 
