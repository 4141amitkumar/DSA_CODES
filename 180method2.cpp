#include<iostream>
#include<vector>
using namespace std;
int count=0;

int inversion(vector<int>& a, vector<int>& b){
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
}
void merge(vector<int>& v1, vector<int>& v2, vector<int>& res){
    int i=0,j=0,k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]) res[k++]=v1[i++];
        else res[k++]=v2[j++];
    }
    if(i==v1.size()) while(j<v2.size()) res[k++]=v2[j++];
    else while(i<v1.size()) res[k++]=v1[i++];
}

void mergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1=n/2, n2=n-n/2;
    vector<int> a(n1),b(n2);
    //copy pasting
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    //magic aka recursion
    mergeSort(a);
    mergeSort(b);

    //first we will count the inversion
    count+=inversion(a,b);
    //merge
    merge(a,b,v);
}
int main(){
    int a[]={5,1,3,0,4,9,6};
    int n1 = sizeof(a)/sizeof(a[0]);
    vector<int> v1(a, a+n1);  //It's a way to make a vector and make it a copy of the predefined array.
    mergeSort(v1);
    cout<<count;
}