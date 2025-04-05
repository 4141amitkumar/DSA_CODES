#include<iostream>
using namespace std;
int main(){
    int arr[]={54,54,741,12,100,872,546,562,56};
    cout<<&arr<<endl;
    int* ptr=arr;
    cout<<ptr<<endl;
    int* ptr1=&arr[0];
    cout<<ptr1<<endl;
    cout<<ptr[5]<<endl;     //we may access the whole array through this method also..........mtlb ye array hi ban gya, display,update sab kuch kar sakte hain
}