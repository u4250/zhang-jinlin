#ifndef RATIONAL_H
#define RATIONAL_H

class Rational 
{
public:
   Rational( int = 0, int = 1 ); 
   Rational addition( const Rational a);
   Rational subtraction( const Rational a);
   Rational multiplication( const Rational a);
   Rational division( const Rational a);
   void printRational ();
   void printRationalAsDouble();
private:
   int numerator;	
   int denominator;
   void reduction();
};

#endif
