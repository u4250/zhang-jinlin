#include <iostream>
using namespace std;
class Complex
{
	public:
		Complex(double =0.0,double =0.0);
		Complex addComplex(Complex);
		Complex subComplex(Complex);
		void printres( );
		double realPart;
		double imaginaryPart;
};

