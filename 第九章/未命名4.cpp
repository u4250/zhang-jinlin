#include <iostream>
#include "Complex.h"
using namespace std; 
main()
{
	Complex a(1,2),c(2,1);
	c.addComplex(a);
	c.printres();
	c.subComplex(a);
	c.printres();
	 
}
