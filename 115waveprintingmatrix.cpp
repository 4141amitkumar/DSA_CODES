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
    int arr[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The wave pattern of the matrix entered is:";
    for (int j=0;j<m;j++){
        if(j%2==0){
        for (int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
        }
        else {
            for (int i=n-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
        }
    }
}