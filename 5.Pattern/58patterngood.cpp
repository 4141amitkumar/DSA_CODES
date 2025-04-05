//Print the given pattern 
//    1       (n=4)               consider this patter as     ___          1                  
//   121                                                      __     +     121
//  12321                                                     _            12321
// 1234321                                                                 1234321
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n,l=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1; j<=n-i;j++){
            cout<<" ";
            }
        for(int k=1;k<=2*i-1;k++){
            cout<<l;
            if (k<i) l++;
            else l--;
        }
        l=1;
        cout<<endl;
        }
        
    }