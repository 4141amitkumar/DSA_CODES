//Size and sizeof operator(How can we use it to find the Length of array?)
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,8,96,78,41,10,5,89,74,10,01,45,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array arr is:"<<n;

}