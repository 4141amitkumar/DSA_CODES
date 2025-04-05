//Given n string consisting of digits from 0 to 9. Return the index of string which has maximum value. (Take 0 based indexing)
#include<iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector <string> v;
    v.push_back("0123");
    v.push_back("0023");
    v.push_back("456");
    v.push_back("00182");
    v.push_back("940");
    v.push_back("002901");
    vector <int> v1;
    for(int i=0;i<v.size();i++){
        int x = stoi(v[i]);
        v1.push_back(x);
    }
    string maxS=v[0];
    int max=v1[0];
    for(int i=1;i<v.size();i++){
        if (v1[i]>max) {
            max=v1[i];
            maxS=v[i];
        }
    }
    int k=0;
    for(int i=0;i<v.size();i++){
        if (v1[i]==max) k=i;
    }
    cout<<"Maximum of them is "<<max<<" and it's index is:"<<k<<endl;
    cout<<"And the exact string will be:"<<maxS;
}