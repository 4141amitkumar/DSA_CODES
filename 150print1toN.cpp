//Print 1 to n (without extra parameter)  --->after recursive call;
#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return ;    //base case
    print(n-1);   //pahle function recall
    cout<<n<<endl;    //kaam uske baad *********

}
int main(){
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    print(n);
}