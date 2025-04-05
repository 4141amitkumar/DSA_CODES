#include <iostream>
using namespace std;
int main(){
    cout<<"Enter three numbers:";
    float x,y,z;
    cin>>x>>y>>z;
    if (x>y){
        if(x>z) cout<<x<<" is the largest.";
        else if (x<z) cout<<z<<" is the largest.";
    }
    if (y>x){
        if(y>z) cout<<y<<" is the largest.";
        else if (y<z) cout <<z<<" is the largest.";
    }
}