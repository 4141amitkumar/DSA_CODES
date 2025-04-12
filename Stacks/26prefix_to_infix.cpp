#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string s = "-/*+79483";
    stack<string> st;
    string ans="";
    char ch;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57){
            st.push(to_string(s[i]-48));
        }
        else{
            ch=s[i];
            string val1 = st.top();
            st.pop();
            string val2 = st.top();
            st.pop();
            ans = '('+val1+ch+val2+')';
            st.push(ans);
        }
    }
    cout<<ans;
}