//Given a sentence ‘str’, return the word that is occurring most number of times in that sentence.
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;
int main(){
    string str = "Raghav is a maths teacher. Raghav is a good person. He is a DSA teacher too.";
    stringstream ss(str);
    string temp;
    vector <string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int n= v.size();
    int count=1,max=1;
    if (n==1) cout<<count;
    else{
        for(int i=1;i<n;i++){
            if(v[i]==v[i-1]){
                count++;
                if(max<count) max=count;
            }
            else count=1;
        }
    }
    count=1;
    for(int i=1;i<n;i++){
            if(v[i]==v[i-1]) count++;
            else count=1;
            if (count==max) cout<<v[i]<<" "<<max<<endl;
        }
}