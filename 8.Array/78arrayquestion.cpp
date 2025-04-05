//Given an array of marks of students, if the mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array.]
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter total number of students:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the marks:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if (arr[i]<35) cout<<i<<" ";
    }
}