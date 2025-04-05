//Given an array with N distinct elements, convert the given array to a form where all elements are in the range from 0 to N-1. 
//The order of elements is the same, i.e., 0 is placed in the place of the smallest element, 1 is placed for the second smallest element, ... N-1 is placed for the largest element.
// if -ve numbers are also in the array******************

//If -ve numbers are also included then we must should keep track of the visited elements
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
    vector <int> is_visited(n,0);
    for(int i=0;i<n;i++){
        int min = INT_MAX;           //store the maximum possible integer in the range of the integers
        int minidx = -1;
        for(int j=0;j<n;j++){
            if (is_visited[j]==0){
            if(v[j]<min) {
                min = v[j];
                minidx = j;
            }
            }
        }
        v[minidx] = i;
        is_visited[minidx]=1;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}