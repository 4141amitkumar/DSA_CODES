//Print the given pattern 
// *******                   
// ***_***
// **___**
// *_____*   (n=4)
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n;
    cin>>n; 
    for(int l=1;l<=2*n-1;l++) cout<<"*";
    cout<<endl;        
    for(int i=1;i<=n-1;i++){
        for (int j=1; j<=n-i;j++){
            cout<<"*";
            }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        for(int m=1;m<=n-i;m++) cout<<"*";
        cout<<endl;
    }
}