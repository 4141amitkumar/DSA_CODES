#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str1 = "123456789";
    int x = stoi(str1);
    cout<<x+1<<endl;
    
    int y = 123456;
    string str2 = to_string(y);
    cout<<str2<<endl;

    string str3= "125478896523636552";
    long long z = stoll(str3);
    cout<<z+1;
}