//method1
#include <iostream>
#include <vector>
using namespace std;
void sort01(vector <int>&v){
    int noz=0,noo=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        if(v[i]==1) noo++;
    }
    for(int i=0;i<v.size();i++){
        if(i<=noz-1) v[i]=0;
        if(i>=noz) v[i]=1;
    }
}
//time complexity is 2n.........kyunki 2 baar for loop chala
int main(){
    vector <int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    sort01(v);
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}