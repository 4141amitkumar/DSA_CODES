#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       int n;
       cin>>n;
       vector<int> a(n);
       int sum=0;
       for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
       }
       int avg = sum/n;
       int count=0;
       if(n==1 || n==2) cout<<-1<<endl;
       else{
         for(int i=0;i<n;i++){
            if(a[i]<avg/2) count++;
         }
         if(count>n/2) cout<<0<<endl;
         else {
            int k = a[(n/2)+1];
            
         }
       }
    }
    return 0;
}
