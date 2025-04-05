#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10,25,30};
    int n = v.size();
    for(int i=1;i<n;i++){
        v[i] +=v[i-1];
    }
    bool flag=false;
    int idx;
    for(int i=0;i<n;i++){
        if(2*v[i]==v[n-1]){
            idx=i;
            flag=true;
        }
    }
    cout<<"Yes it can be partitioned into 2 continuous array. 1st array is from index=0 to index="<<idx<<" and 2nd array is from index="<<idx+1<<" to index="<<n-1;
}