#include <iostream>
using namespace std;
int main()
{
    int counter=1,number=0,largest=0,larger=0;
    while(counter<=5)
    {
        cout<<("请输入你需要比较的第")<<counter<<("个数是：");
        cin>>number;
        if(number>largest) larger=largest,largest=number;
        else if(number<largest&&number>larger) larger=number;
        counter++;

    }
    cout<<("最大的数是：")<<largest<<("\n");
    cout<<("最二大的数是：")<<larger;
}
