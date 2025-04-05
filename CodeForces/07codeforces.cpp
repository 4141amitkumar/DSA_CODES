#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int x;
        cin>>x;
        v.push_back(x);
        for(int i=1;i<n;i++){
            int y;
            cin>>y;
            if(y!=x && y>=v.back()) v.push_back(y);
        }
        cout<<v.size()-1<<endl;
    }
}