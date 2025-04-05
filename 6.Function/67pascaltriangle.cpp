#include <iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int permutation(int x,int y){
    int perm=factorial(x)/factorial(x-y);
    return perm;
}
int combination(int x,int y){
    int comb=permutation(x,y)/factorial(y);
    return comb;
}
int pastri(int x){
    for (int i=0;i<=x;i++){
        for (int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter size of pascals triangle:";
    int n;
    cin>>n;
    pastri(n);

}