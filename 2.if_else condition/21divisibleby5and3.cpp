#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the Number:";
    int x;
    cin>>x;
    if (x%5==0 || x%3==0) cout<<"Yes";
    else cout<<"No";
}