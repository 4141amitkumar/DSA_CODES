//Take float input and print the fractional part of the real number.
#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter the number:";
    cin>>x;
    int y= (int)x;
    if (y<0) y-=1;
    cout<<x-y;
}