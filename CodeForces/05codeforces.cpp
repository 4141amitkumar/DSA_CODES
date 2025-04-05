#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int x;
        cin>>x;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int j=0,mex=0,a = 0;
        while(j<n){
            if(v[j]==mex){
                mex++;
                j++;
            }
            else if(mex<v[j]){
               break;
            }
            else {
                a = v[j];
                j++;
            }
        }
        if (mex==0) mex=mex;
        else if((mex-a)%x==0) mex++;
        cout<<mex<<endl;
    }
    return 0;
}