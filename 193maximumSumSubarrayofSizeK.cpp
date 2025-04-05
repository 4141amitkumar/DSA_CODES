// method 1 ---> Brute Force
#include <iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int max = INT_MIN;
    int maxIdx = -1;
    for(int i =0; i<=n-k;i++){
        int sum=0;
        for(int j=0;j<k;j++){
            sum = sum + arr[i+j];
            if(sum>max) {
                max = sum;
                maxIdx = i;
            }
        }
    }
    cout<<max<<endl;
    cout<<maxIdx;
}

// T.C = O(k*n)