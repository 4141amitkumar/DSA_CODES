//Write a program to copy the contents of one array into another in the reverse order.
#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout<<"Enter the size of the array:";
    int n,x,y;
    cin>>n;
    vector <int> v1;
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>x;
        v1.push_back(x);
    }
    for (int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    } 
    cout<<endl;
    vector <int> v2;
    for(int i=n-1;i>=0;i--){
        y=v1[i];
        v2.push_back(y);
    }
    for (int i=0;i<n;i++){
        cout<<v2[i]<<" ";
    } 
}