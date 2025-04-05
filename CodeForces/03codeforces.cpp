#include <bits/stdc++.h>
using namespace std;
int idx = 0;
int maximum(vector <int> v){
    int maxi = 0;
    idx=0;
    for(int i=0;i<v.size();i++){
        if (maxi<v[i]) {
            maxi = v[i];
            idx = i;
        }
    }
    return maxi;
}
int main(){
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans1=0,ans2=0;
        int maxi = maximum(v);
        int j=0,flag=0;
        for(int i=0;i<n;i++){
            if (v[i]==maxi){
                if(i%2==idx%2)continue;
                else {
                    j=i;
                    flag=1;
                    break;
                }
            }
        }
        if(idx%2==1){
            if(n%2==0) ans1 = maxi + n/2;
            else ans1 = maxi + (n-1)/2;
        }
        else{
            if(n%2==0) ans1 = maxi + n/2;
            else ans1 = maxi + (n+1)/2;
        }
        if(flag==1 && j%2==1){
            if(n%2==0) ans2 = maxi + n/2;
            else ans2 = maxi + (n-1)/2;
        }
        else if(flag==1&& j%2==0){
            if(n%2==0) ans2 = maxi + n/2;
            else ans2 = maxi + (n+1)/2;
        }
        cout<<max(ans1,ans2)<<endl;
    }
    return 0;
}