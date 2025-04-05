//Input{100,80,60,81,70,60,75,85};
//Output-{1,1,1,3,1,1,3,7}  //These represent how many days it was the top price "continuously"

#include<iostream>
#include<stack>
#include <vector>
using namespace std;

vector<int> stockspan(vector<int> v){
    int n = v.size();
    stack<int> st;
    vector<int> ans(n);
    ans[0] = 1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && v[st.top()]<=v[i]) st.pop();
        if(st.size()==0) ans[i]=i-(-1);
        else ans[i] = i-st.top();
        st.push(i);
    }
    return ans;
}
int main(){
    vector<int> v = {100,80,60,81,70,60,75,85};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> finalans = stockspan(v);
    for(int i=0;i<finalans.size();i++){
        cout<<finalans[i]<<" ";
    }
}