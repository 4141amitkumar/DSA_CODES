//Given a sorted array of non-negative distinct integers, find the smallest missing non-negative element in it.
//1st approach will be with the linear search which is very easy.
//2nd approach with the binary search.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter elements:"<<endl;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int lo=0, hi = n-1, mid,ans=-1;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(v[mid]==mid) lo = mid+1;
        else {
            ans=mid;
            hi = mid-1;
        }
    }
    cout<<ans<<" is the missing element.";
}



