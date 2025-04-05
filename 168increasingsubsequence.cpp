#include<iostream>
#include<vector>
using namespace std;
void increasingsubsequence(vector<int> nums, int idx,vector<int> ans, vector<vector<int>>& v, int k){
    if(idx==nums.size()){
        if(ans.size()==k) v.push_back(ans);
        return;
    }
    if(ans.size()+ (nums.size()-idx)<k) return;
    increasingsubsequence(nums, idx+1,ans, v, k);
    ans.push_back(nums[idx]);
    increasingsubsequence(nums, idx+1,ans, v, k);
}
int main(){
    vector<int> v;
    cout<<"Enter size of array:";
    int n;
    cin>>n;
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter value of k:";
    int k;
    cin>>k;
    vector<int> ans;
    vector<vector<int>> finalans;
    increasingsubsequence(v,0,ans, finalans, k);
    cout<<"Subsequence of length "<<k<<" of the given array is:"<<endl;
    for(int i=0;i<finalans.size();i++){
        for(int j=0; j<((finalans[i]).size());j++){
            cout<<(finalans[i])[j]<<" ";
        }
        cout<<endl;
    }
}