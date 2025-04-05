//swapping 2 numbers without the use functions...
#include <iostream>
using namespace std;
int main(){
    int a,b,x,y,temp;             //method1
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<b;
    cin>>x>>y;
    x=x+y;                      //method2
    y=x-y;
    x=x-y;
    cout<<x<<y;
}