//Find the maximum value out of all the elements in the array.
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
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"Maximum value out of all the elements in the array is:"<<max;
}