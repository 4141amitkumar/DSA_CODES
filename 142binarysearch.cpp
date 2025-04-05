//Binary Search
#include <iostream>
using namespace std;
int main(){
    int arr[]= {5,8,9,14,24,45,65,98,102,412,452,741};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0, hi = n-1 , target = 98;
    int mid = lo + (hi-lo)/2;
    while(lo<=hi){
        mid = lo + (hi-lo)/2;
        if (arr[mid] == target) {
            cout<<target<<" FOUND!!";
            break;
        }
        else if (arr[mid] != target && lo==hi){
            cout<<"NOT FOUND";
            break;
        }
        else if (arr[mid]>target) hi = mid-1;
        else if (arr[mid]< target) lo = mid + 1;
    }
}