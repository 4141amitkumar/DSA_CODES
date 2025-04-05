#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max_x=0, max_y=0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            max_x=max(max_x,x);
            max_y=max(max_y,y);
        }
        int ans = 2*(max_x+max_y);
        cout<<ans<<endl;
    }
}