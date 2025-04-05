//WAP to check if a number is prime or not.
#include <iostream>
#include <cmath>
using namespace std;
// int main(){
//     cout<<"Enter the number:";
//     int x;
//     cin>>x;
//     bool flag=0;
//     if (x==1) {flag=1;
//     cout<<x<<" is neither prime nor composite.";}
//     for(int i=2;i<x;i++){
//         if(x%i==0){
//             cout<<x<<" is a composite number.";
//             flag=1;
//         break;}
//     }
//     if(flag==0) cout<<x<<" is a prime number.";
// }

int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    bool flag=0;
    if(n==1 || n==0) {
        cout<<n<<" is neither prime nor composite";
    }
    else { 
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
    if (flag==0) cout<<n<<" is a prime number.";
    else cout<<n<<" is a composite number.";
    }
}


