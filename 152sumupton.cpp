//print sum from 1 to n (return type)
#include <iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    cout<<"Sum is:"<<sum(n);
}