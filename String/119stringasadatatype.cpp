#include <iostream>
#include <string>
using namespace std;
int main(){
    string x;
    getline(cin,x);      //no problem with spaces
    cout<<x<<endl;
    string str = "Amit Kumar";
    cout<<str<<endl;
    string s;
    cin>>s;       //" Amit Kumar"......Lekin wo input kewal Amit lega..(cin me space ya enter to value separate krti hi hai.)
    cout<<s<<endl;
    string a,b;
    cin>>a>>b;
    cout<<a<<endl;
    cout<<b<<endl;
}