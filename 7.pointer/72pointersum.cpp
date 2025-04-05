//Write a program to calculate sum of two numbers using pointers.
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int* p1=&x;
    int* p2 = &y;
    int sum=*p1 +*p2;
    cout<<sum;
}