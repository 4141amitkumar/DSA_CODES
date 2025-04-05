// method 2 ----> SLIDING WINDOW ALGORITHM
#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k =4;
    int prevsum = 0;
    for(int i = 0; i<k;i++){
        prevsum += arr[i];
    }
    int maxsum = prevsum;
    int i =1, j=k, maxidx = -1;
    while(j<n){
        int currentsum = prevsum + arr[j] - arr[i-1];
        if(maxsum<currentsum){
            maxsum = currentsum;
            maxidx = i;
        }
        prevsum = currentsum;
        i++;j++;
    }
    cout<<maxsum<<endl;
    cout<<maxidx;
}
