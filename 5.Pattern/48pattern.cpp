//Print the given pattern
// ABCD
// ABCD
// ABCD
// ABCD                     user input n
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the last alphabet:";
    char a;
    cin>>a;
    int n=(int)a;
    for(int i=1;i<=(n-64);i++){
        for (int j=65; j<=n;j++){
            cout<<(char)j;
        }
        cout<<endl;
    }
}