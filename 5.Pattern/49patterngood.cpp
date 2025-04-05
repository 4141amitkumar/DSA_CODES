//Print the given pattern   (n=odd always)
// ##*##                   #*#                         * (n=1)
// ##*##                   ***
// *****                   #*# (n=3)
// ##*##         
// ##*## (n=5)              
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1; j<=n;j++){
            if((j==n/2 + 1 ) || (i==n/2+1)) cout<<"*";
            else cout<<"#";
        }
        cout<<endl;
    }
}