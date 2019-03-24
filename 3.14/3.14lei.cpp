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
	   cout<<"请输入姓:"<<endl;
	   cin>>name1;
	  
	 }	
	   string getfirstName( string)
	 {
	   return  name1;
	 }
	   void setlastName()
     {
	   cout<<"请输入名:";
	   cin>>name2;
	}
	   string getlastName( string)
	 {
	 	return  name2;
	 }
	   void setSalary()
	 {
	 	int b;
	 	cout<<"请输入你的月薪；"<<endl;
		 cin>>a;
		 if(a<0) a=0;
		 b=12*a;
		 cout<<"你的年薪为："<<b;
		 b=1.1*b;
		 cout<<"增薪10%后为："<<b; 
	 }
	 int getSalary()
	 {
	 	int b;
	 	b=12*a*1.1;
	 	return b;
	 }
};
