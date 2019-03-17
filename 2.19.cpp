#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,Sum,Average,Product,Smallest,Largest;
    cout <<"请输入三个整数:";
    cin >>a>>b>>c;
    Sum = a+b+c;
    Average = Sum/3;
    Product = a*b*c;
    if(a>b&&a>c){
        Largest=a;
        if(b>c)
           Smallest=c;
        else Smallest=b;
        }
    if(b>a&&b>c){
        Largest=b;
        if(a>c)
            Smallest=c;
        else Smallest=a;
    }
    if(c>a&&c>b){
        Largest=c;
        if(a>b)
            Smallest=b;
        else Smallest=a;
        }
    if(a==b){
        if(c>a)
        Smallest=a,Largest=c;
        else
        Smallest=c,Largest=a;

    }
      if(a==c){
        if(b>a)
        Smallest=a,Largest=b;
        else
        Smallest=b,Largest=a;
        }
    if(b==c){
        if(b>a)
        Smallest=a,Largest=b;
        else
        Smallest=b,Largest=a;
        }
    cout<<"Sum is"<<Sum<<"\n";
    cout<<"Average is "<<Average<<"\n";
    cout<<"Product is "<<Product<<"\n";
    cout<<"Smallest is "<<Smallest<<"\n";
    cout<<"Largest is "<<Largest<<"\n";

    return 0;
}
