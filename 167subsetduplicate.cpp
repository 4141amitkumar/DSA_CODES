#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void storeSubset(string ans, string original, vector<string>& v, bool flag){
    if (original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.size()==1){
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
        storeSubset(ans,original.substr(1),v,true);
        return;
    }
    char dh = original[1];
    if(ch==dh){
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
        storeSubset(ans,original.substr(1),v,false); 
    }
    else{
        if(flag==true) storeSubset(ans+ch,original.substr(1),v,true);
        storeSubset(ans,original.substr(1),v,true);
    }
}
int main(){
    string str = "aba";
    vector<string> v;
    sort(str.begin(),str.end());
    storeSubset("", str,v,true);
    for(string ele: v){
        cout<<ele<<endl;
    }
}