#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        while(v.size()!=1){
            int arr = floor((v[0]+v[1])/2);
            v.erase(v.begin());
            v.erase(v.begin());
            v.insert(v.begin(), arr);
        }
        cout<<v[0]<<endl;
    }
    return 0;
}