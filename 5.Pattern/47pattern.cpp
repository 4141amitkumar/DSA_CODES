//Print the given pattern
// 1
// 12
// 123
// 1234                      user input n
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}