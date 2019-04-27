#include <iostream>
#include <array>
using namespace std;
int main()
{    
	int i,j,min,sum=0;
	array<array<int,3>,2>t;
    t[1][2]=0;
    t={};
    cout<<"输入array的值：";
    for(i=0;i<2;i++){
    for(j=0;j<3;j++){
    	cin>>t[i][j];
		}
	}
	min=t[0][0];
	cout<<"  ① ② ③\n";
	for(i=0;i<2;i++){
    	for(j=0;j<3;j++){
    		if(i==0&&j==0) cout<<"① ";
  			if(i==1&&j==0) cout<<"② ";
  			cout<<t[i][j]<<"  ";
  			if(j==2) cout<<"\n";
		}
	}
    for(i=0;i<2;i++){
    	for(j=0;j<3;j++){
    		if(min>t[i][j]) min=t[i][j];
		}
	}
	cout<<"最小值是："<<min<<"\n";
	cout<<"第一行的元素是：";
	for(j=0;j<3;j++){
		cout<<t[0][j]<<" ";
		if(j==2) cout<<"\n";
	}
		for(i=0;i<2;i++){
			sum+=t[i][1];
	}
	cout<<"第二列元素和为："<<sum<<" ";
}

