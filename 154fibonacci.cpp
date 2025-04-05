//*Multiple calls
//Write a function to calculate the nth fibonacci number using recursion
#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==1 || n==2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    cout<<n<<"th fibonacci number is:"<<fibonacci(n);
}