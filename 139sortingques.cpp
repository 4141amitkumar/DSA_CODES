//Given an array with N distinct elements, convert the given array to a form where all elements are in the range from 0 to N-1. 
//The order of elements is the same, i.e., 0 is placed in the place of the smallest element, 1 is placed for the second smallest element, ... N-1 is placed for the largest element.
#include <iostream>
#include <vector>
#include <climits>     //for using INT_MAX it represents the maximum value present in the array
using namespace std;
int main(){
    vector <int> v;
    cout<<"Enter the size of the array:";
    int n;
    cin>>n;
    cout<<"Enter the array elements:";
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        int min = INT_MAX;           //store the maximum element from the array
        int minidx = -1;
        for(int j=0;j<n;j++){
            if (v[j]>=i){
            if(v[j]<min) {
                min = v[j];
                minidx = j;
            }
            }
        }
        v[minidx] = i;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}