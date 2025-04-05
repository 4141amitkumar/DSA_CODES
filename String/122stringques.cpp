//Input a string of even length and reverse the first half of the string.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int len=str.size();
    reverse(str.begin(), str.begin()+len/2);
    cout<<str;
}