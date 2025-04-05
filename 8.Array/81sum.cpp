//Calculate the sum of all the elements in the given array.
#include <iostream>
using namespace std;
int main( ){
    int arr[]={1,55,2,78,4,54,4,5,4,1,5,58,2,25,5,2,5,52,2,5,52,2,55,41,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<n<<endl;
    cout<<sum;
}