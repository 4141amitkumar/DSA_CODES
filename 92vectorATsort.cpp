#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(54);
    v.push_back(71);
    v.push_back(54);
    v.push_back(21);
    v.push_back(59);
    v.push_back(40);
    v.at(5)=100;
    for (int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<endl;
    //sort
    sort(v.begin(),v.end());
    for (int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}