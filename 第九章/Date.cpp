#include <iostream> 
#include "Date.h"
using namespace std;

Date::Date( int m, int d, int y ) 
	:month(m),day(d),year(y)
	{
	}

void setDate( int mo, int dy, int yr )
{
	if((mo==1||mo==3||mo==5||mo==7||mo==8||mo==10||mo==12)&&dy==31){
		if(mo==12){
			yr+=1;
			mo=1;
			dy=1;
		}
		else{
		mo+=1;
		dy=1;
		}
	}
	else if((mo==4||mo==6||mo==9||mo==11)&&dy==30){
		mo+=1;
		dy=1;
	}
	else if(mo==2&&((yr%4==0)&&(yr%100==!0))||(yr%400==0)&&dy==29){
		mo+=1;
		dy=1;	
	}
	else if(mo==2&&(!(yr%4==0)&&(yr%100==!0))||(yr%400==0)&&dy==28){
		mo+=1;
		dy=1;	
	}
	else dy=dy+1;
} 
void Date::print()
{
   cout << month << '-' << day << '-' << year << '\n'; // outputs date
}
//
//void Date::setDay( int d )
//{
//   if ( month == 2 && leapYear() )  
//      day = ( d <= 29 && d >= 1 ) ? d : 1; 
//   else
//      day = ( d <= monthDays() && d >= 1 ) ? d : 1;
//}
//
//void Date::setMonth( int m ) 
//{ 
//   month = m <= 12 && m >= 1 ? m : 1; // sets month  
//}
//
//void Date::setYear( int y ) 
//{
//   year = y >= 2000 ? y : 2000;
//}

