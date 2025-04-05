//Write a program to store roll number and marks obtained by 4 students side by side in a matrix.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[4][2];
    for (int i=0;i<4;i++){
        cout<<"Enter roll no and marks of student "<<i+1<<" :";
        for (int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<4;i++){
        for (int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}