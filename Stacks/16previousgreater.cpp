// ex array: 3 1 2 5 4 6 2 4
// return ans: -1 3 3 -1 5 -1 6 6

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> prevgreater(vector<int>& v){
    int n = v.size();
    stack<int> st;
    vector<int> ans(n);
    ans[0] = -1;
    st.push(v[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=v[i]) st.pop();
        if(st.size()==0) ans[i]=-1;
        else ans[i] = st.top();
        st.push(v[i]);
    }
    return ans;
}
int main(){
    vector<int> v = {3,1,2,5,4,6,2,4};
    vector<int> ans = prevgreater(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
//S.C = O(n);
//T.C = O(n)