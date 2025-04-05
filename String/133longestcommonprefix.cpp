//Input n strings and write a program to find the longest common prefix string of all the strings.
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    v.push_back("fling");
    sort(v.begin(),v.end());
    int n = v.size();
    string str;
    for(int i=0; i<min(v[0].size(),v[n-1].size());i++){
        if ((v[0])[i]==(v[n-1])[i]) str.push_back((v[0])[i]);
        else break;
    }
    cout<<str;
}