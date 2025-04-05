//Print the given pattern 
// ###*       (n=4)                  
// ##**                 
// #***       
// ****                     
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1; j<=n;j++){
            if(j>=n+1-i) cout<<"*";
            else cout<<"#";
        }
        cout<<endl;
    }
}