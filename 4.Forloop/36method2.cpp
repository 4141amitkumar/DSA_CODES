//WAP to count digits of a given number.
#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the number:";
    int x;
    cin>>x;
    int counter=0;
    if (x==0) cout<<1;
    else {while(x>0){
        x=x/10;
        counter++;
    }
    cout<<counter;}}