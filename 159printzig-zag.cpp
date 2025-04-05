//print zig-zag
//input:1     output:111
///input:2    output:211121112
///input:3    output: 321112111232111211123
///input:4    output: 432111211123211121112343211121112321112111234

#include <iostream>
using namespace std;
void pip(int n){
    if(n==0) return;
    cout<<n;
    pip(n-1);
    cout<<n;
    pip(n-1);
    cout<<n;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    pip(n);
}