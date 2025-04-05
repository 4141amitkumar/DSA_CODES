//Print the given pattern
// 1234
// 1234
// 1234
// 1234                   user input n (n is the side of square)
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1; j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}