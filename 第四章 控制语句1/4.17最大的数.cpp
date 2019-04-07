#include <iostream>
using namespace std;
int main()
{
    int counter=1,number=0,largest=0;
    while(counter<=10)
    {
        cout<<("请输入你需要比较的第")<<counter<<("个数是：");
        cin>>number;
        if(number>largest) largest=number;
        counter++;
        cout<<("最大的数是：")<<largest;
	}
} 
