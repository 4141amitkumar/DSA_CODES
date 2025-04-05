#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans, string original, vector<string>& v,int idx){
    if (idx==original.size()){
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    storeSubset(ans,original,v,idx+1);
    storeSubset(ans+ch,original,v,idx+1);
}
int main(){
    string str = "abc";
    vector<string> v;
    storeSubset("", str,v,0);
    for(string ele: v){
        cout<<ele<<endl;
    }
}
