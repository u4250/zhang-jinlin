#include <iostream> 
#include "Rational.h" 
using namespace std;

Rational::Rational( int n, int d )
{
   numerator = n;
   denominator = d;
   reduction();
} 

Rational Rational::addition( const Rational b)
{
   Rational t;
   t.numerator = b.numerator * denominator;
   t.numerator += b.denominator * numerator; 
   t.denominator = b.denominator * denominator;
   t.reduction();
   return t;
} 

Rational Rational::subtraction( const Rational c )
{
   Rational t; 

   t.numerator = c.denominator * numerator;
   t.numerator -= denominator * c.numerator;
   t.denominator = c.denominator * denominator;
   t.reduction();
   return t;
}

Rational Rational::multiplication( const Rational d )
{
   Rational t;

   t.numerator = d.numerator * numerator;
   t.denominator = d.denominator * denominator;
   t.reduction();
   return t;
} 

Rational Rational::division( const Rational e )
{
   Rational t;

   t.numerator = e.denominator * numerator;  
   t.denominator = denominator * e.numerator;
   t.reduction();
   return t;
} 

void Rational::printRational ()
{
   if ( denominator == 0 ) 
      cout << "\n分母不能为0!!!" << "\n";
   else if ( numerator == 0 ) 
      cout << 0;
   else
      cout << numerator << '/' << denominator;
}

void Rational::printRationalAsDouble() 
{  
   cout <<(double)numerator / denominator; 
} 

void Rational::reduction()
{
   int largest; 
   if(numerator > denominator )
   largest=numerator;
   else
   largest=denominator;
   int gcd = 0;
   for ( int loop = 2; loop <= largest; loop++ )
       if ( numerator % loop == 0 && denominator % loop == 0 )
          gcd = loop;

   if (gcd != 0) 
   {
      numerator /= gcd;
      denominator /= gcd;
   }
}
