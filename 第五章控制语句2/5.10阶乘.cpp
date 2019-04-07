#include <iostream>

using namespace std;

int main()
{
    int i,j,result=1;
    for(i=1;i<=5;i++){
     for(j=1;j<=i;j++){
        result*=j;
     }
     cout<<("   ________\n");
     cout<<("   |")<<i<<("!|")<<result;
     if(result/100) {
        cout<<("|\n");
     }
     else if(result/10) cout<<(" |\n");
        else cout<<("  |\n");
     result=1;
    }
    cout<<("   ________\n");
}
