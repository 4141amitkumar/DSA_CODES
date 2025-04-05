#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int gold=0;
        int people=0;
        for(int i=0;i<n;i++){
            if(a[i]>=k) gold+=a[i];
            else if(gold!=0 && a[i]==0){
                people++;
                gold--;
            }
            else continue;
        }
        cout<<people<<endl;
    }
    return 0;
}
