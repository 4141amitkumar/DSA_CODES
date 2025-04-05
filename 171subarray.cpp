// Find out all the subsets of an array
#include<iostream>
#include<vector>
using namespace std;
void subarray(vector<int>& nums, vector<int> ans, vector<vector<int>>& v, int idx){
    if(idx==nums.size()){
        v.push_back(ans);
        return;
    }
    subarray(nums, ans, v, idx+1);    //left call always
    if(ans.size()==0 || (nums[idx-1]==ans[ans.size()-1])){
        ans.push_back(nums[idx]);
        subarray(nums, ans, v,idx+1);
    }
}
int main(){
    vector<int> nums;
    cout<<"Enter size of array:";
    int n;
    cin>>n;
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    vector<int> ans;
    vector<vector<int>> v;
    subarray(nums, ans, v, 0);
    for(int i=0;i<v.size();i++){
        for(int j=0; j<((v[i]).size());j++){
            cout<<(v[i])[j]<<" ";
        }
        cout<<endl;
    }
}