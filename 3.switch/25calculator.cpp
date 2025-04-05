//Write a program to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions. The calculator should input two numbers and an operator from user.
#include <iostream>
using namespace std;
int main(){
    cout<<"Write the expression on which you want the operation:";
    int x,y;
    char z;
    cin>>x>>z>>y;
    switch(z){
        case '+':
        cout<<x<<z<<y<<"="<<x+y;
        break;
        case '-':
        cout<<x<<z<<y<<"="<<x-y;
        break;
        case '*':
        cout<<x<<z<<y<<"="<<x*y;
        break;
        case '/':
        cout<<x<<z<<y<<"="<<x/y;
        
    }
}