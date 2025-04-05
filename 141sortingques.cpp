//Given an array, arr[] containing ‘n’ integers, the task is to find an integer (say K) such that after replacing each and every 
//element of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted array. If no such integer exists that satisfies the above condition then
//return -1. Find the range of K'.............************************K should be integer strictly.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
    vector <int> v = {5,3,10,3};
    int n = v.size();
    bool flag=true;
    float kmin = (float)INT_MIN ;   // because we have to select the maximum value of the kmin
    float kmax = (float)INT_MAX;    // because we have to select the minimum value of the kmax
    for (int i=0; i<n-1;i++){
        float k = (v[i]+v[i+1])/2.0;
        if(v[i]>=v[i+1]) {  //kmin
        kmin = max(kmin, k);
        }
        else {      //kmax
            kmax = min(kmax, k);
        }
        if(kmin>kmax) {
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<"No possible value of K possible.";
    else if(kmin==kmax){
        if(kmin-(int)kmin == 0){
            cout<<"There is only one value of k possible:"<<kmin;
        }
        else cout<<"No possible value of K possible.";
    }
    else {
        if(kmin-(int)kmin >0){
            kmin = (int)kmin + 1;
        }
        cout<<"["<<kmin<<","<<kmax<<"]";
    }
}
