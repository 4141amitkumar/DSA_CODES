#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& v){
    int i=0,j=0,k=0;
    int n1=a.size();
    int n2=b.size();
    while(i<n1 && j<n2){
        if(a[i]<=b[j]) {
            v[k]=a[i];
            i++;
        }
        else {
            v[k]=b[j];
            j++;
        }
        k++;
    }
    if(i==n1) while(j<n2) v[k++]=b[j++];
    if(j==n2) while(i<n1) v[k++]=a[i++];
}
void mergeSort(vector<int>& v){
    int n=v.size();
    if (n==1) return;
    //dividing
    int n1=n/2, n2=n-n/2;
    vector<int> a(n1), b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int a[]={5,6,9,10,4,2,1,3,8,7};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> v(a,a+n);
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}