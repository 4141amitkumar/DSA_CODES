#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> m;
    m["Harsh"] = 15;
    m["Lokesh"] = 67;
    m["raghav"] = 85;

    for(auto p: m){     //you may also write "auto" in place of "pair<string,int>"
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("raghav");
    for(auto p: m){
        cout<<p.first<<" "<<p.second;
    }

}