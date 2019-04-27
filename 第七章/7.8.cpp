#include <iostream>
#include <array>
using namespace std;
int main()
{    
int res,i,t,max1=0,min1;
    array<int,7>alphabet={1,2,3,4,5,6,7};
	//cout<<alphabet[6];
	array<double,7>grades;   
	//cout<<"输入一个值"; 
	// cin>>grades[4];
	array<int,5>values={8,8,8,8,8}; 
	array<double,100>temperatures={5,6,8,4,6,4,2,85,8,98,5}; 
	for(i=0;i<100;i++){ 
		res+=temperatures[i];
			}    
	array<double,11>a={0,1,2,3,4,5,6,7,8,9,10};
	array<double,34>b;    
	for(i=0;i<11;i++){
		b[i]=a[i];
		}    
	array<double,19>w={1,456,13,48,635,4645,3221,3,7,8,5,552,2,3,5,54265,5,65,5};
	for(i=0;i<19;i++){
		if(w[i]>max1){
			max1=w[i];
			}       
		if(w[i]<min1){ 
			min1=w[i]; 
			}  
		}     
		cout<<max1<<"\n"<<min1;}

