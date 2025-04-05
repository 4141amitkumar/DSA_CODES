//Print the nth fibonacci number
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    int fn=0,a=1,b=1;
    for(int i=3;i<=n;i++){
        fn=a+b;
        a=b;
        b=fn;
    }
    if (n==1 || n==2) cout<<"Fibonaaci number is:"<<1;
    else cout<<"Fibonaaci number is:"<<fn;
}