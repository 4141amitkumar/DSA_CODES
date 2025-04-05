//Input a string of even length and return the second half of that string using inbuilt substr function
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    cout<<str.substr(n/2,n/2);
}