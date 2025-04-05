//Print the given pattern 
// 4444444                   
// 4333334
// 4322234
// 4321234   (n=4)
// 4322234
// 4333334                   *********************best question
// 4444444
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n;
    cin>>n;
    int k=n;        
    for(int i=1;i<=2*n-1;i++){
        for (int j=1; j<=2*n-1;j++){
            int x=2*n-i,y=2*n-j;
            cout<<(n+1-min(i,min(j,min(x,y))));
            }
        cout<<endl;
    }
}