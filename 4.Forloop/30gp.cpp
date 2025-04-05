//Display this GP - 1,2,4,8,16,32,.. upto ‘n’terms.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"Enter number of terms:";
    int n;
    cin>>n;
    for(int i=1;i<=pow(2,(n-1));i*=2){
        cout<<i<<endl;
    }
}