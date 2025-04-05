//Count the number of elements in given array greater than a given number x.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    cout<<"Enter array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number from which greater element you want:";
    int x;
    cin>>x;
    int count=0;
    for (int i=0;i<n;i++){
        if (arr[i]>x){
            count++;   

        }
    }
    cout<<count<<" elements";
}