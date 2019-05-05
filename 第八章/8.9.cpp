#include <iostream>
using namespace std;

int main()
{
    long int value1=200000;
    long int value2;
    long int* longPtr;
    longPtr=&value1;
    cout<<*longPtr<<"\n";
    value2=*longPtr;
    cout<<value2<<" "<<&value1<<" "<<longPtr;

}


