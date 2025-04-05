//you are given a matrix/2D-Array of size (nxn). Change this matrix into its transpose.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter dimension unit:";
    cin>>n;
    cout<<"Enter values of elements:"<<endl;
    int arr1[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j) continue;
            else if (i<j) swap(arr1[i][j],arr1[j][i]);
        }
    }
    cout<<"The transpose of the matrix entered is:"<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}