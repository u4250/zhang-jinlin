#include <iostream>
using namespace std;
double tripleByValue(double x)
{
    return 3*x;
}
double tripleByReference(double &x)
{
    return 3*x;
}
int main()
{
    double count;
    count=3.0;
    cout<<tripleByReference(count)<<"\n";
    cout<<tripleByValue(count);

}

