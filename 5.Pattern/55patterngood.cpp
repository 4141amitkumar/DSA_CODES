//Print the given pattern 
//    1       (n=4)                  
//   12                 
//  123       
// 1234                     
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n,k=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1; j<=n;j++){
            if(j>=n+1-i) {
                cout<<k;
                k++;
            }
            else cout<<" ";
        }
        k=1;
        cout<<endl;
    }
}