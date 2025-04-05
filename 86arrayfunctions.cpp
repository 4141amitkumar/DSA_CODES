#include<iostream>
using namespace std;
void display(int arr[],int n){                             //yahan int arr[] ki jagah int*arr bhi likh skte hain
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void update(int arr[]){
    arr[0]=100;
}
int main(){
    int arr[]={5,96,54,785,41,54,15,41,545,784,45};
    display(arr,11);
    update(arr);
    cout<<"The new updated array:"<<endl;
    display(arr,11);
    cout<<endl;
    cout<<endl;
    //one more way the ultimate way to print elements
    int* ptr=arr;
    for(int i=0;i<11;i++){
        cout<<*ptr<<endl;
        ptr++;                        //ye samjho bahut accha concept hai
    }
}