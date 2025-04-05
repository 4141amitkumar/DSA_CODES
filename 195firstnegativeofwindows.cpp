// Find the first negative number in every window of size k
#include <iostream>
#include <vector>
using namespace std;
vector<int> firstnegative(vector<int> v, int k){
    int prevnegIdx=-1;
    vector<int> ans;
    for(int i=0;i<k;i++){
        if(v[i]<0) {
            prevnegIdx = i;
            break;
        }
    }
    if(prevnegIdx==-1) ans.push_back(1);
    else ans.push_back(v[prevnegIdx]);
    int i=1, j=k;
    while(j<v.size()){
        if(prevnegIdx>=i) ans.push_back(v[prevnegIdx]);
        else{
            prevnegIdx=-1;
            for(int a=i; a<=j;a++){
                if(v[a]<0) {
                   prevnegIdx = a;
                   break;
                }
            }
            if(prevnegIdx!=-1) ans.push_back(v[prevnegIdx]);
            else ans.push_back(1);
        }
        i++;
        j++;
    }
    return ans;
}
int main(){
    vector<int> v={2,3,4, 4,-7,-1,4,-2,6};
    int k=4;
    vector<int> ans = firstnegative(v,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}