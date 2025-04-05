//Make a function which calculates the factorial of n using recursion.

//for finding out the factorial of n ---> n * factorial of (n-1)
#include <iostream>
using namespace std;
int fact(int n){
    //base case
    if (n==0) return 1;
    //kaam and recursive call
    return n * fact(n-1);
}
int main(){
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is:"<<fact(n);
}