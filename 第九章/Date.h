#ifndef DATE_H
#define DATE_H

class Date 
{
public:
   Date( int = 1, int = 1, int = 2000 );
   void print();
   void setDate( int, int, int );
private:
   int month;
   int day;
   int year; 		
}; 

#endif
