#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    pair<int,string> p; 
    p.first = 1;
    p.second = "raghav";
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    cout<<endl;
    //just like pair, unordered_map is also a type of pair....


    unordered_map<string, int> m;
    pair<string, int> p1;
    p1.first = "raghav";
    p1.second = 15;
    m.insert(p1);    //this is the correct way to insert values into the unordered maps
    pair<string, int> p2;
    p2.first = "amit";
    p2.second = 07;
    pair<string, int> p3;
    p3.first = "harsh";
    p3.second = 99;
    m.insert(p2);
    m.insert(p3);

    for(pair<string,int> p: m){     //you may also write "auto" in place of "pair<string,int>"
        cout<<p.first<<" "<<p.second<<endl;
    }
}