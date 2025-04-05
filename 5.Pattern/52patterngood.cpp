//Print the given pattern  
// 1                  
// 23                  
// 456       
// 78910                      
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n,k=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1; j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}