//Find the second largest element in the given Array.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    cout<<"Enter array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int smax;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max) max=arr[i];
    // }
    // int smax;
    // if (arr[0]==max) smax==arr[1];
    // else smax=arr[0];
    // for(int i=0;i<n;i++){
    //     if(arr[i]>smax && arr[i]!=max) smax=arr[i];
    // }
    // cout<<"Second largest element is:"<<smax;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            smax= max;
            max=arr[i];
        }
    }
    if(arr[0]==max){
        smax=arr[1];
        for(int i=1;i<n;i++){
            if(arr[i]>smax) smax=arr[i];
        }
    }
    cout<<smax;
}