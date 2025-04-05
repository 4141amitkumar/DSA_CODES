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
int main(){
    cout<<"Enter value of n and r:";
    int n,r;
    cin>>n>>r;
    cout<<"Permutation is:"<<permutation(n,r)<<endl;
    cout<<"Combination is:"<<combination(n,r);

}