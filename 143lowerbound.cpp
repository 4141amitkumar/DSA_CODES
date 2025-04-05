//Given a sorted integer array and an integer ‘x’, find the lower bound of x.
#include <iostream>
using namespace std;
int main(){
    int arr[]= {1,2,4,5,9,15,18,21,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0, hi = n-1 , target = 20;
    int mid = lo + (hi-lo)/2;
    while(lo<=hi){
        mid = lo + (hi-lo)/2;
        if (arr[mid] == target) {
            cout<<arr[mid-1];
            break;
        }
        else if (arr[mid]>target) hi = mid-1;
        else if (arr[mid]< target) lo = mid + 1;
        if (arr[lo]>target || arr[hi]<target){
            cout<<"Lower bound is:"<<arr[mid];
            break;
        }
    }
}