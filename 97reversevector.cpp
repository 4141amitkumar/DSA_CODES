//Write a program to reverse the array without using any extra array.
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
    for(int i=0,j=v1.size()-1;i<=j;i++,j--)                   // IMPORTANT (aise bhi kar sakte ho last question ko, for loop pe dhyaaaaaan do*********)
    {
        int temp=v1[i];
        v1[i]=v1[j];
        v1[j]=temp;
    }
    for (int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
}