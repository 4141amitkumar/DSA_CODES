//Find the doublet in the Array whose sum is equal to the given value x.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"Enter the size of the array:";
    int n,x;
    cin>>n;
    vector <int> v;
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter the target:";
    int target;
    cin>>target;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (v[i]+v[j]==target){
                cout<<"{"<<i<<","<<j<<"}"<<endl;
            }
        }
    }
}