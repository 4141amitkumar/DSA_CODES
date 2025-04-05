//Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the base number:";
    int a,b,c;
    cin>>a;
    cout<<"Enter the power:";
    cin>>b;
    c=a;
    for(int i=2;i<=b;i++){
        c=c*a;
    }
    cout<<c;
}