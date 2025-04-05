//Print the factorials of first n numbers
#include <iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<factorial(i)<<endl;
    }
}