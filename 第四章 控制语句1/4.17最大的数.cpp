#include <iostream>
using namespace std;
int main()
{
    int counter=1,number=0,largest=0;
    while(counter<=10)
    {
        cout<<("����������Ҫ�Ƚϵĵ�")<<counter<<("�����ǣ�");
        cin>>number;
        if(number>largest) largest=number;
        counter++;
        cout<<("�������ǣ�")<<largest;
	}
} 
