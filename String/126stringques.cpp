//Input a string and return the number of times the neighbouring characters are different from each other.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string:";
    getline(cin,str);
    int n = str.size();
    if (n==1) cout<<0;
    else {int count=0;
    for(int i=0;i<n;i++){
        if (i==0){
            if(str[0]!=str[1]) count++;}
        else if (i==n-1){
            if (str[n-1]!=str[n-2]) count++;}
         else if( str[i]!=str[i-1] && str[i]!=str[i+1]) count++;
    }
    cout<<count;}
}