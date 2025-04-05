//Write a function to compute the greatest common divisor of two given numbers
#include <iostream>
using namespace std;
int hcf(int x, int y){
    int hcf=1,i=2;
    while(x!=1 && y!=1){                  //while k under wo condition hoti hai jab tak loop chale.........
        if(x%i==0 && y%i==0) {
            hcf=hcf*i;
            x=x/i;
            y=y/i;
            i=2;}
        else if(i==min(x,y)){
            break;
        }
        else i++;
    }
    return hcf;
}
int main (){
    int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"HCF of "<<a<<" and "<<b<<" is: "<<hcf(a,b);
}