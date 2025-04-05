// Find the greatest common divisor
//Euclid's Division Algo
#include <iostream>
#include <vector>
using namespace std;
int hcf(int a, int b){
    int r = b%a;
    if(r==0) return a;
    hcf(r,a);
}
int main(){
    int a = 27;
    int b = 45;
    cout<<hcf(a,b);
}
//any of a or b may be min/max

//Time complexity will be O(log(a+b)), may be proved with induction.