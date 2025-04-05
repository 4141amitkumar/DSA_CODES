#include <iostream>
using namespace std;
void print(int n, int arr[]){
    if(n==0) return;
    print(n-1, arr);
    cout<<arr[n-1];
}

void display(int n, int arr[], int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(n, arr, idx+1);
}
int main(){
    int arr[]={1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(n, arr);
    cout<<endl;
    display(n, arr, 0);
}