#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=3;
    int c=a%b;
    cout<<c<<endl;
    int x=10;
    int y=-3;
    int z=x%y;    //x positive tha, isiliye z bhi positive..... -3*(-3)=9, so remainder will be 1.
    cout<<z<<endl;
    int p=-10;
    int q=3;
    int r=p%q;   //p negative hai, so r will be negative.... 3*(-3)=-9, and -10-(-9)=-1 remainder...
    cout<<r<<endl;
    int i=-10;
    int j=-3;
    int k=i%j;  //i negative hai, to answer will be negative.... -3 * (3)=-9..... and -10-(-9)=-1 remainder
    cout<<k;
    //Modulo operator will work only when both operand will be integers***.
}