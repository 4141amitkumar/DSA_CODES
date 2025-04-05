//remove consecutive duplicates in a string
//ex : "aaabbcddaabffg" --> give "abcdabfg"
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
string remove(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s = "";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s = "aaabbcddaabffg";
    cout<<remove(s);
}