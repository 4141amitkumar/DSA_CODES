//Generate all binary strings of length n without consecutive 1's 
//using vector
//backtracking used
#include <iostream>
#include <vector>
using namespace std;
void binary(int n, vector<int> ans, vector<vector<int>>& v){
    if(n==0){
        v.push_back(ans);
        return;
    }
    ans.push_back(0);
    binary(n-1, ans ,v);
    ans.pop_back();
    if(ans.size()==0 || ans.back()==0){
        ans.push_back(1);
        binary(n-1,ans, v);
        ans.pop_back();
    }
}
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    vector<int> ans;
    vector<vector<int>> v;
    binary(n, ans, v);
    for(int i=0;i<v.size();i++){
        for(int j=0; j<v[i].size();j++){
            cout<<(v[i])[j];
        }
        cout<<endl;
    }
}