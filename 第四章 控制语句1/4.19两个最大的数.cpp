#include <iostream>
using namespace std;
int main()
{
    int counter=1,number=0,largest=0,larger=0;
    while(counter<=5)
    {
        cout<<("����������Ҫ�Ƚϵĵ�")<<counter<<("�����ǣ�");
        cin>>number;
        if(number>largest) larger=largest,largest=number;
        else if(number<largest&&number>larger) larger=number;
        counter++;

    }
    cout<<("�������ǣ�")<<largest<<("\n");
    cout<<("���������ǣ�")<<larger;
}
