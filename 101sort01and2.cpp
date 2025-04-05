//Method 2 for sorting 0's, 1's, and 2's......    DUTCH FLAG ALGO (3 pointer method)
#include <iostream>
#include <vector>
using namespace std;
void dutch_flag(vector <int>& v){
    int low=0, mid=0, high=v.size()-1;
    while (mid<=high){
        if (v[mid]==0){
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;
        }
        else if (v[mid]==1){
            mid++;
        }
        else if (v[mid]==2){
            int temp=v[mid];
            v[mid]=v[high];
            v[high]=temp;
            high--;                 //mid++ nhi karna, kyunki may be swap hokar 2 hi wapas aa gya ho mid pe hi       }
        }
    }
}
int main(){
    vector <int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    dutch_flag(v);
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}