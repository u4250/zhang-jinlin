#include <iostream>
#define SIZE 5

using namespace std;

int main()
{
    //a
    int i;
    unsigned int values[SIZE]={2,4,6,8,10};
    //b
    unsigned int *vPtr=values;
    //c
    for(i=0;i<SIZE;i++){
        cout<<values[i]<<" ";
    }
    cout<<"\n";
    //d
    vPtr=&values[0];
    *vPtr=values[0];
    //e
    for(i=0;i<SIZE;i++){
        cout<<*(vPtr+i)<<" ";
    }
    cout<<"\n";
    //f
      for(i=0;i<SIZE;i++){
        cout<<*(values+i)<<" ";
        }
    cout<<"\n";
    //g
   for(i=0;i<SIZE;i++){
        cout<<vPtr[i]<<" ";
    }
    cout<<"\n";
    //h
    values[4],*(vPtr+4),*(values+4),vPtr[4];
    //i  引用了该指针所指处后移三个·位置，也就是8.
    cout<<*(vPtr+3);
    //j 
    vPtr=&values[4];
    cout<<*(vPtr-=4);
}


