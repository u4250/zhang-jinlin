#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include <ctime>
#include "Employee.h"
#include "SalariedEmployee.h" 
#include "CommissionEmployee.h"  
#include "BasePlusCommissionEmployee.h" 
using namespace std;

main()
{
	time_t now = time(0);
    tm *ltm = localtime(&now);
    int m=1 + ltm->tm_mon;
	vector < Employee * > employees( 3 );
	employees[ 0 ] = new SalariedEmployee( 
      "zhang", "a", "111-11-1111", 6, 1, 1999, 800 );
    employees[ 1 ] = new CommissionEmployee( 
      "jin", "b", "333-33-3333", 6, 2, 1999, 10000, .06 );
    employees[ 2 ] = new BasePlusCommissionEmployee( 
      "lin", "c", "444-44-4444", 6, 3, 1999, 5000, .04, 300 );
    Date birthday = employees[ 0 ]->getBirthDate();
    	if(m=birthday.getMonth()) 
            cout<< ( employees[ 0 ].earnings() + 100.0 ) << endl;
      else
         cout << "earned $" << employees[ 0 ].earnings() << endl;

      cout << endl;
	}
      
}
