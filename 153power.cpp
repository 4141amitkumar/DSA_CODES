//Make a function which calculates 'a' raised to the power 'b' using recursion.
#include <iostream>
using namespace std;
int power(int b, int a){
    if (a==0) return 1;  //base case
    return b * power(b,a-1);
}
int main(){
    int a,b;
    cout<<"Enter the value of base:";
    cin>>b;
    cout<<"Enter the value of power:";
    cin>>a;
    cout<<"Answer is:"<<power(b,a);
}