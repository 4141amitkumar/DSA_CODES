//Write a C++ program to find the largest element of a given 2D array of integers.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows:";
    cin>>m;
    cout<<"Enter number of columns:";
    cin>>n;
    int arr[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int largest=arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (arr[i][j]>largest) largest=arr[i][j];
        }
    }
    cout<<"The largest element of given 2D array of integers is:"<<largest;
}