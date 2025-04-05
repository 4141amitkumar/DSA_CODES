// Write a program to add two matrices.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows:";
    cin>>m;
    cout<<"Enter number of columns:";
    cin>>n;
    cout<<"1st matrices:";
    int arr1[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"2nd matrices:";     // rows and columns to same hi honge, tab hi sum kar rhe ho                 
    int arr2[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<endl;
    cout<<"Final summed up matrix is:"<<endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    
}