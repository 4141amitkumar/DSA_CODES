//Write a program to reverse the part of an array.
#include <iostream>
#include <vector>
using namespace std;
void reverse(int i,int j, vector <int> &v)            //&v, because we need not to create a new vector
{
    for(i,j;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
int main(){
    cout<<"Enter the size of the array:";
    int n,x,y;
    cin>>n;
    vector <int> v;
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int i,j;
    cout<<"Enter first and last index to reverse that part:";
    cin>>i>>j;
    reverse(i,j,v);
    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    } 
}