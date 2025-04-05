#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a[]={5,6,9,10,4,2,1,3,8,7};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> v(a,a+n);
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]) count++;
        }
    }
    cout<<count;
}