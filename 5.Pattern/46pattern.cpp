//Print the given pattern
// ****
// ***
// **
// *                 user input n
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=n; j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}