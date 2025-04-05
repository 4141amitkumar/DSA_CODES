//Remove all occurrences of 'a' from a string.
#include <iostream>
#include <string>
using namespace std;
void remove(string str, int idx){
    if(idx==str.size()) return;
    if(str[idx]!='a') cout<<str[idx];
    remove(str,idx+1);
}

void rchar(string ans, string original){  //but it has bad space complexity and time also
    if(original.size()==0){
        cout<<ans;
        return;
    }
    char ch = original[0];
    if(ch=='a') rchar(ans, original.substr(1));
    else rchar(ans+ch, original.substr(1));

}
int main(){
    string s ="Raghav Garg";
    remove(s,0);
    cout<<endl;
    rchar("",s );
}