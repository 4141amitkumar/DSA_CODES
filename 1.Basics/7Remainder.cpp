//Take two integers input, a and b : a>b, and find the remainder when a is divided by b.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    int c=a/b;
    int r=a-(c*b);
    cout<<"Remainder is:"<<r;
    return 0;
}