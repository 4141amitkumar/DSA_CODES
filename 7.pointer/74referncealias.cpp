#include <iostream>
using namespace std;
void swap(int &x, int &y){                 //ye yaad hi karlo, koi khass logical explaination nhi hai abhi
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<y;          
}
