//Find out maximum element of an array using recursion
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maximum(vector<int>& v, int idx){
    if(idx==v.size()-1) return v[idx];
    int maxInRest = maximum(v, idx + 1);
    return max(v[idx], maxInRest);
}

int maxx(vector<int>& v, int idx){
    if(idx==v.size()) return INT_MIN;
    return max(v[idx],maxx(v,idx+1));
}
int main(){
    vector <int> v = {5,4,7,8,5,9,6,322,2,5,5,6,2,5,6,3,68};
    cout<<maximum(v,0)<<endl;
    cout<<maxx(v,0);
}