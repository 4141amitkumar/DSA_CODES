#include <iostream>
#include <vector>
using namespace std;
void insertion_sort(vector <int> &v){
    int n = v.size();
    for (int i=1;i<n;i++){
        int j = i-1;
        int k= i;
        while(v[i]<v[j] && j>=0){
            swap(v[i],v[j]);
            i--;
            j--;
        }
        i=k;
    }
}
int main(){
    vector <int> v = {5,3,1,4,2,8,7,6,-8,0,-7,0};
    int n = v.size();
    insertion_sort(v);
    for (int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }
}