//Given a string consisting of lowercase English alphabets. Print the character that is occurring most number of times.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter string:";
    getline(cin,str);
    sort(str.begin(),str.end());
    int max=1, count=1;
    int n=str.size();
    if (n==1) cout<<count;
    else{
    for(int i=0;i<n;i++){
        if (str[i]==str[i+1]) count++;
        else if(i==n-1) {if(str[i]!=str[i-1]) count--;}
        else count=1;
        if (count>max) max=count;
    }
    cout<<max;
    }
}