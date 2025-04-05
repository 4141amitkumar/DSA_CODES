//Print the given pattern 
//    ****       (n=4)               consider this patter as     ___      ****                  
//   ****                                                        __   +   ****
//  ****                                                         _        ****
// ****                                                                   ****
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1; j<=n-i;j++){
            cout<<" ";
            }
        for(int k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
        }
        
    }