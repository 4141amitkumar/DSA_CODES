// given an integer n, flip all its bits
#include <iostream>
using namespace std;
int flip(int n){
    int x = n;
    n = n| (n>>1);
    n = n| (n>>2);
    n = n| (n>>4);
    n = n| (n>>8);
    n = n| (n>>16);
    return (x ^ n);
}
int main(){
    int n =100;
    cout<<flip(n);

}
