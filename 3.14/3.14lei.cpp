#include <iostream>
#include <string>
using namespace std;
class Employee{
private:
		string name1,name2;
   		int a;


public:
       void setfirstName()
     {
	   string name1,name2;
	   cout<<"��������:"<<endl;
	   cin>>name1;
	  
	 }	
	   string getfirstName( string)
	 {
	   return  name1;
	 }
	   void setlastName()
     {
	   cout<<"��������:";
	   cin>>name2;
	}
	   string getlastName( string)
	 {
	 	return  name2;
	 }
	   void setSalary()
	 {
	 	int b;
	 	cout<<"�����������н��"<<endl;
		 cin>>a;
		 if(a<0) a=0;
		 b=12*a;
		 cout<<"�����нΪ��"<<b;
		 b=1.1*b;
		 cout<<"��н10%��Ϊ��"<<b; 
	 }
	 int getSalary()
	 {
	 	int b;
	 	b=12*a*1.1;
	 	return b;
	 }
};
