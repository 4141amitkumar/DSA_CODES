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
    string lcp1=v[0];
    for(int i=0;i<v.size()-1;i++){
        string lcp;
        for (int j=0;j<min(v[i].size(),v[i+1].size());j++){
            if(lcp1[j]==(v[i+1])[j]) lcp.push_back(lcp1[j]);
            else break;
        }
        lcp1=lcp;
    }
    cout<<lcp1;
}

// ******next cpp file me iska easy trick bhi kiye hue hai, usme sorting karo pahle aur fhir 1st and last element ko compare karo bs.....

