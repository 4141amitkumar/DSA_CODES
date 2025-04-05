//Print 1 to n (with extra parameter);
#include <iostream>
using namespace std;
void print(int i, int n){
    if (i>n) return ;
    cout<<i<<endl;
    return print(i+1,n);
}
int main(){
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    print(1,n);
}