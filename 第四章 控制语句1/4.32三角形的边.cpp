#include <iostream>
using namespace std;
main()
{
	double a,b,c;
	cin>>a>>b>>c;
	if((a+b>c&&a-b<c)&&(a+c>b&&a-c<b)&&(b+c>a&&b-c<a))
	cout<<("T");
	else cout<<("F"); 
 } 
