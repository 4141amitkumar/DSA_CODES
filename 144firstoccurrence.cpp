//Given a sorted array of n elements and a target ‘x’. Find the first occurrence of ‘x’ in the array. If ‘x’ does not exist return -1.
#include <iostream>
using namespace std;
int main(){
    int arr[]= {1,2,2,2,2,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,5,5,6,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0, hi = n-1 , target = 4;
    int mid = lo + (hi-lo)/2;
    bool flag = false;
    while(lo<=hi){
        mid = lo + (hi-lo)/2;
        if (arr[mid] == target) {
            if(arr[mid-1]==target) hi = mid-1;
            else {
                cout<<mid<<" is the first index of the target.";
                flag=true;
                break;
            }
        }
        else if (arr[mid]>target) hi = mid-1;
        else if (arr[mid]< target) lo = mid + 1;
    }
    if(flag==false) cout<<-1;
}