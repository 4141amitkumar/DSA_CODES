//Print the given pattern 
// 1234567                   
// 123_567
// 12___67
// 1_____7   (n=4)
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n;
    cin>>n;
    int x=1; 
    for(int l=1;l<=2*n-1;l++) cout<<l;
    cout<<endl;        
    for(int i=1;i<=n-1;i++){
        for (int j=1; j<=n-i;j++){
            cout<<j;
            x++;
            }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            x++;
        }
        for(int m=1;m<=n-i;m++){
            cout<<x;
            x++;
        }
        cout<<endl;
        x=1;
    }
}