#include<iostream>
using namespace std;
int partition(int arr[],int s, int e){
    int count=0;
    for(int i=s;i<=e;i++){
        if(i==(s+e)/2) continue;
        if(arr[(s+e)/2]>arr[i]) count++;
    }
    int pivotidx=s+count;
    swap(arr[(s+e)/2],arr[pivotidx]);
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
int kthsmallest(int arr[], int s, int e,int k){
    int pivotidx = partition(arr,s,e);
    if(pivotidx+1==k) return arr[pivotidx];
    else if(pivotidx<k) return kthsmallest(arr,pivotidx+1,e,k);
    else return kthsmallest(arr, s,pivotidx-1,k);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;
    cout<<kthsmallest(arr,0,n-1,k);
}