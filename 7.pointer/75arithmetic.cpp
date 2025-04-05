#include <iostream>
using namespace std;
int main(){
    int x=5;
    int* ptr= &x;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<endl;
    bool y=true;
    bool* ptr1=&y;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    ptr1=ptr1+1;
    cout<<ptr1<<endl;;
    cout<<*ptr1;
}