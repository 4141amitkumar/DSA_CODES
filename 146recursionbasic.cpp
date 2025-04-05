//Print "Good Morning" 'n' number of times, where 'n' is user input.
#include <iostream>
using namespace std;
void goodmorning(int n){
    if(n==0) return;
    cout<<"Good Morning"<<endl;
    goodmorning(n-1);
}
int main(){
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    goodmorning(n);
}
