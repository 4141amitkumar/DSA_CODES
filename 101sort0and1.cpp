//method2
#include <iostream>
#include <vector>
using namespace std;
void sort01(vector <int>&v){
    int i=0,j=v.size()-1;
    while(i<j){
        if (v[i]==1 && v[j]==0) {
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        if (v[i]==0) i++;
        if (v[j]==1) j--;
    }
}
//time complexity this method is also 2n.
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