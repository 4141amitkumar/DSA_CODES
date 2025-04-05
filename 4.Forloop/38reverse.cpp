//WAP to print reverse of a given number.
#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the number:";
    int x;
    cin>>x;
    int a,b;
    int reverse=0;
    while (x>0){
        a=x/10;
        b=x-a*10;
        x=a;
        reverse*=10;
        reverse+=b;
    }
    cout<<reverse;
}