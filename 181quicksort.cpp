#include<iostream>
using namespace std;
int partition(int arr[],int s, int e){
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[s]>arr[i]) count++;
    }
    int pivotidx=s+count;
    swap(arr[s],arr[pivotidx]);
    int i=s;
    int j=e;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<arr[pivotidx]) i++;
        if(arr[j]>=arr[pivotidx])j--;
        if(arr[i]>arr[pivotidx] && arr[j]<arr[pivotidx]) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
void quicksort(int arr[], int s, int e){
    if(s>=e) return;
    int pivotidx = partition(arr,s,e);
    quicksort(arr, s,pivotidx-1);
    quicksort(arr,pivotidx+1,e);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}