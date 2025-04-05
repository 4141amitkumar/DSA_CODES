#include <iostream>
#include <string>
using namespace std;
int main(){
    string s= "abcdef";
    cout<<s.substr(0)<<endl;
    cout<<s.substr(1)<<endl;
    cout<<s.substr(2)<<endl;
    cout<<s.substr(3)<<endl;
    cout<<s.substr(4)<<endl;
    cout<<s.substr(5)<<endl;
    cout<<s.substr(1,3)<<endl;    //----> iska mtlb hai 1st index se 3 length ka lena hai substring
}