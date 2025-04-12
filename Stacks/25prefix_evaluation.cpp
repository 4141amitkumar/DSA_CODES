#include<iostream>
#include<stack>
using namespace std;

//we will traverse in reverse order
//to dhyaan rakhna op val1 val2 order pe
int solve(int val1, int val2, int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "-/*+79483";
    stack<int> st;
    int ans=0;
    char ch;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57){
            st.push(s[i]-48);
        }
        else{
            ch=s[i];
            int val1 = st.top();   //it is value1 very important, kyunki ulta traverse kr rahe hain
            st.pop();
            int val2 = st.top();
            st.pop();
            ans = solve(val1,val2,ch);
            st.push(ans);
        }
    }
    cout<<ans;
}