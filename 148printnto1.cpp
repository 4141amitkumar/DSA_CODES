//Print n to 1;
#include <iostream>
using namespace std;
void print(int n){
    if(n==0) return;    //base case
    cout<<n<<endl;        // work
    return print(n-1);    //function recall
}
int main(){
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    print(n);
}