#include <iostream>
#include <array>
using namespace std;
int main()
{    
	const size_t row=3;
	const size_t column=5;
	array<array<int,column>,row>sales;
	for(size_t row=0;row<sales.size();++row)
		for(size_t column=0;column<sales[row].size();++column)
			sales[row][column];	
//	for(size_t row=0;row<sales.size();++row){
//		for(size_t column=0;column<sales[row].size();++column){
			cout<<"("<<row<<","<<column<<")="<<sales[row][column]<<"\n";
//		}
//	}
}
	

