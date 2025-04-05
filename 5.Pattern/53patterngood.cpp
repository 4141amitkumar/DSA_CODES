//Print the given pattern 
// 1                  
// 01                  
// 101       
// 0101                      
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n,k=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1; j<=i;j++){
            if(i%2==1){ if(j%2==1) cout<<1;
            else cout<<0;}
            else { if(j%2==1) cout<<0;
            else cout<<1;}
        }
        cout<<endl;
    }
}