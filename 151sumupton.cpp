//print sum from 1 to n (Parameterised)
#include <iostream>
using namespace std;
void sum(int su, int n){
    if (n==0) {
        cout<<su<<endl;
        return;
    }
    sum(su+n, n-1);
}
int main(){
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    sum(0,n);
}