#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>
using namespace std;
void gess()
{
    unsigned int i,number,m;
    cout << "I have a number between 1and1000.\ncan you guess my number?" << endl;
    cout<<"Please type your first guess.";
    srand(static_cast<unsigned int>(time(0)));
    m=rand()%10;
    for(i=0;;i++){
        cin>>number;
        if(number==m){
            if(i<5)
        {
            cout<<"NB";
            break;
        }
            else
        {
                    cout<<"You should be able to do better";
                    break;
        }
        }
        else{
            if(number>m) cout<<"Too high,Try again.";
            else cout<<"Too low,Try again.";
            }
			 }
}
main()
{
    int t=1;
    while(t)
    {
        gess();
        cout<<"would you like play again(0 or 1)?";
        cin>>t;
    }
    cout<<"Have a good time";
}
