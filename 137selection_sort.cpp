#include <iostream>
#include <vector>
using namespace std;
void selection_sort(vector <int> &v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        int min=v[i],minindx=i;
        for(int j=i;j<n;j++){
            if(v[j]<min) {
                min=v[j];
                minindx= j;
            }
        }
        swap(v[i],v[minindx]);
    }
}
int main(){
    vector <int> v = {5,3,1,4,2,8,7,6};
    int n = v.size();
    selection_sort(v);
    for (int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }
}
