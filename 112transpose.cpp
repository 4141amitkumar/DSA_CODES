//Write a program to print the transpose of the matrix entered by the user and store it in a new matrix.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows:";
    cin>>m;
    cout<<"Enter number of columns:";
    cin>>n;
    cout<<"Enter values of elements:"<<endl;
    int arr1[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            arr2[i][j]=arr1[j][i];
        }
    }
    cout<<"The transpose of the matrix entered is:";
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){

            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}