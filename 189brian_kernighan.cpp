#include<iostream>
using namespace std;
int set_bits(int n){
    int count=0;
    while(n>0){
        n = (n & (n-1));
        count++;
    }
    return count;
}
int main(){
    int n = 22;
    cout<<set_bits(n)<<endl;
}