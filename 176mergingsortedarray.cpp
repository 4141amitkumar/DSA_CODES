#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v1, vector<int>& v2, vector<int>& res){
    int i=0,j=0,k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]) res[k++]=v1[i++];
        else res[k++]=v2[j++];
    }
    if(i==v1.size()){
        while(j<v2.size()) res[k++]=v2[j++];
    }
    else{
        while(i<v1.size()) res[k++]=v1[i++];
    }
}
int main(){
    int a[]={1,4,5,8};
    int n1 = sizeof(a)/sizeof(a[0]);
    vector<int> v1(a, a+n1);  //It's a way to make a vector and make it a copy of the predefined array.
    int b[]={2,3,6,7,10,12};
    int n2= sizeof(b)/sizeof(b[0]);
    vector<int> v2(b, b+n2);
    int result[n1+n2];
    vector<int> res(n1+n2);
    merge(v1,v2,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}