#include <iostream>
using namespace std;
using namespace std;
class Date
{
	private:
		int Month,Day,Year; 
	public:
		Date()
        {
		Month=0,Day=0,Year=0;
        }
		void setmonth(int month)
		{ 
			Month=month;
			cout<<"���������ڣ��£���"<<endl;
			cin>>Month;
			if(Month>13||Month<0) Month=1; 
		}
		int getmonth()
		{
			return Month;
		}
		void setday( int day)
		{
			Day=day;
			cout<<"���������ڣ��գ���"<<endl;
			cin>>Day;
		}
		int getday()
		{
			return Day;
		}
		void setyear(int year)
		{
			Year=year;
			cout<<"���������ڣ��꣩��"<<endl;
			cin>>Year;
		}
		int getyear()
		{
			return Year;
		}
		void displayDate() 
        { 
   			cout << Month << '/' << Day << '/' << Year << endl; 
        } 
};
