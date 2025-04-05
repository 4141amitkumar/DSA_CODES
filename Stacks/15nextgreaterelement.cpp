// ex array: 3 1 2 5 4 6 2 4
// return ans: 5 2 5 6 6 -1 4 -1     returns the first greater element it encounter in an array
// brute force complexity : O(n^2)

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nextgreater(vector<int>& v){
    int n = v.size();
    stack<int> st;
    vector<int> ans(n);
    ans[n-1] = -1;
    st.push(v[n-1]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=v[n-1-i]) st.pop();
        if(st.size()==0) ans[n-1-i]=-1;
        else ans[n-1-i] = st.top();
        st.push(v[n-1-i]);
    }
    return ans;
}
int main(){
    vector<int> v = {3,1,2,5,4,6,2,4};
    vector<int> ans = nextgreater(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
//S.C = O(n);
//T.C = O(n)