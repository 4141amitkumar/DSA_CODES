//Print the given pattern 
// ___*                   
// __***               *
// _*****             ***              *
// *******           *****            ***                     *  (n=1)
// _*****             ***              *   (n=2)
// __***               *    (n=3)
// ___*     (n=4)
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter value of n:";
    int n;
    cin>>n;
    int l=n-1,i=1;
    int m=i;                   //jab n assigned ho gya, uske baad hi l ki value assign kar skte n k respect me....
    for(i;i<=2*n-1;i++){
        for (int j=1; j<=l;j++){
            cout<<" ";
            }
        if (i<n) l--;
        else l++;
        for(int k=1;k<=2*m-1;k++){
            cout<<"*";
        }
        if (i<n) m++;
        else m--;
        cout<<endl;
        }
        
    }