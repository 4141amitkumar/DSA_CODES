//Take positive integer input and tell if it is a three digit number or not.
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number:";
    int x;
    cin>>x;
    if (x>99 && x<1000) cout<<"The entered number is a 3 digit number.";
    else cout<<"No";
}