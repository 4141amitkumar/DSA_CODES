//Print the sum of this series : 1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.
#include <iostream>
using namespace std;
int main() {
    int sum=0,n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if (i%2==1){sum+=i;}
        else if (i%2==0){sum-=i;}
    }
    cout<<sum;
}