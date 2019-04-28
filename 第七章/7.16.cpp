#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;
unsigned int flip()
{
    unsigned int res1,res2;
    res1=1+rand()%6;
    res1=1+rand()%6;
    return res1+res2;
}
int main()
{
	int i,res1,res2;
	array<int,11>s={};
	array<int,11>b={1,2,3,4,5,6,5,4,3,2,1};
	 srand( time( 0 ) );
	for(i=0;i<36000;i++){
		res1=1+rand()%6;
    	res2=1+rand()%6;
		s[res1+res2-2]++;
	}
	   cout << setw( 10 ) << "Sum" << setw( 10 ) << "Total" << setw( 10 )
      << "Expected" << setw( 10 ) << "Actual\n" << fixed << showpoint;
   for ( int i = 0;i<11; i++ )
      cout << setw( 10 ) << i+2 << setw( 10 ) << s[ i ] 
         << setprecision( 3 ) << setw( 9 ) 
         << 100.0 * b[ i ] / 36 << "%" << setprecision( 3 )
         << setw( 9 ) << 100.0 * s[ i ] /36000<< "%\n";
 } 
 
