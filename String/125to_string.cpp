//Return the total number of digits in a number without using any loop.
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    string str;
    str = to_string(n);
    cout<<"Total number of digits are:"<<str.size();
}