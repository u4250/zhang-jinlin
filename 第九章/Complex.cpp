#include <iostream>
#include "Complex.h"
using namespace std;
Complex::Complex(double r,double i)
{
	realPart=r;
	imaginaryPart=i;
}
Complex Complex::addComplex(Complex a)
{
	Complex t;
	realPart+=a.realPart;
	imaginaryPart+=a.imaginaryPart;
	return t;
}
Complex Complex::subComplex(Complex a)
{
	Complex t;
	realPart-=a.realPart;
	imaginaryPart-=a.imaginaryPart;
	return t;
}
void Complex:: printres()
{
	cout << "(" << realPart << ", " << imaginaryPart << ")";
}
